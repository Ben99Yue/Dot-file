joern> importCode.c.fromString( """
           int myfunc(int b) {
             int a = 42;
             if (b > 10) {
                foo(a)
             }
             bar(a);
           }
           """
       ) 
joern> run.ossdataflow

joern> cpg.method("myfunc").plotCfg 

joern> cpg.method($name).dotCfg.l


git clone https://github.com/ShiftLeftSecurity/x42.git
importCode(inputPath="./x42/c", projectName="x42-c")

open("x42-c")

joern-parse x42.c

joern-export --repr pdg --out outdir
