% Compile all the block for Simulink
% This may be required e.g. for different version of MATLAB
disp('+ ----------------------------------+');
disp('| Compiling arduino_CAN S-functions |');
disp('+ ----------------------------------+');

% Version of the compiler to be used
cc = mex.getCompilerConfigurations;
ccf = fieldnames(cc);
for iccf = 1:numel(ccf)
    ccv = cc.(ccf{iccf});
    if (ischar(ccv) || isnumeric(ccv)) && isempty(ccv)
        disp([ccf{iccf} ': ' ccv]);
    end
end

% Block: arduino_CAN_setup
mex -v arduino_CAN_setup.c arduino_CAN_setup_wrapper.c

% Block: arduino_CAN_rtr_msg
mex -v arduino_CAN_rtr_msg.c arduino_CAN_rtr_msg_wrapper.c

% Block: arduino_CAN_rx_msg
mex -v arduino_CAN_rx_msg.c arduino_CAN_rx_msg_wrapper.c

% Block: arduino_CAN_tx_msg
mex -v arduino_CAN_tx_msg.c arduino_CAN_tx_msg_wrapper.c

% Copy files to the parents folder
clear mex
cf = pwd;
pcf = cf(1:max(strfind(cf,filesep))-1);
[isCopied, msg, msgId] = copyfile([cf '\arduino_CAN*.mexw*'],pcf);

if isCopied
   disp(['MEX-files copied succesfully to: ' pcf]);
else
   error(['Failed to copy MEX-files to ' pcf char(10) ...
          num2str(msgId) ': ' msg]);
end

% Clean up
disp('+ ----------------------------------+');
disp('|               Done                |');
disp('+ ----------------------------------+');


