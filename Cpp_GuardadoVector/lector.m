fid=fopen("file.binary","rb")
valores=fread(fid,45,"int32")
fclose(fid)
x=1:1:length(valores)
plot(x,valores)

[a, b]=min(abs(valores-3.9))
find(valores==3)