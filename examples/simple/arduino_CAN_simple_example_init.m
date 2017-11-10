% Try to add path for arduino_CAN_library.slx if it doesn't exist
if isempty(which('arduino_CAN_library.slx'))
    disp('Adding path for arduino_CAN_library.slx');
    cp = pwd;
    sepidx = strfind(cp,filesep);
    addpath(cp(1:sepidx(end-1)));
end
disp('Done');