//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8017DB10(PPC::Runtime::GCContext* context)
{
/*8017DB10 0017A910*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0D90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DB14 0017A914*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*8017DB18 0017A918*/ PPC::Runtime::ASM::beq(.L_8017DF54);
/*8017DB1C 0017A91C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8017DB20 0017A920*/ PPC::Runtime::ASM::bge(.L_8017DD40);
/*8017DB24 0017A924*/ PPC::Runtime::ASM::fneg(context->f3, context->f1);
/*8017DB28 0017A928*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DB2C 0017A92C*/ PPC::Runtime::ASM::b(.L_8017DB38);
RUNTIME_PPC_JUMP_LABEL(.L_8017DB30, 0x8017DB30) //this is a jump label
/*8017DB30 0017A930*/ PPC::Runtime::ASM::fsub(context->f3, context->f3, context->f0);
/*8017DB34 0017A934*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
RUNTIME_PPC_JUMP_LABEL(.L_8017DB38, 0x8017DB38) //this is a jump label
/*8017DB38 0017A938*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8017DB3C 0017A93C*/ PPC::Runtime::ASM::bgt(.L_8017DB30);
/*8017DB40 0017A940*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DB44 0017A944*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8017DB48 0017A948*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DB4C 0017A94C*/ PPC::Runtime::ASM::bne(.L_8017DC40);
/*8017DB50 0017A950*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0DC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DB54 0017A954*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8017DB58 0017A958*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DB5C 0017A95C*/ PPC::Runtime::ASM::bne(.L_8017DBCC);
/*8017DB60 0017A960*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DB64 0017A964*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8017DB68 0017A968*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DB6C 0017A96C*/ PPC::Runtime::ASM::bne(.L_8017DB9C);
/*8017DB70 0017A970*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8017DB74 0017A974*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DB78 0017A978*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DB7C 0017A97C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DB80 0017A980*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8017DB84 0017A984*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0D94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DB88 0017A988*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8017DB8C 0017A98C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8017DB90 0017A990*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8017DB94 0017A994*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DB98 0017A998*/ PPC::Runtime::ASM::b(.L_8017DD38);
RUNTIME_PPC_JUMP_LABEL(.L_8017DB9C, 0x8017DB9C) //this is a jump label
/*8017DB9C 0017A99C*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8017DBA0 0017A9A0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DBA4 0017A9A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DBA8 0017A9A8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DBAC 0017A9AC*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8017DBB0 0017A9B0*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0DE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DBB4 0017A9B4*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8017DBB8 0017A9B8*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8017DBBC 0017A9BC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8017DBC0 0017A9C0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DBC4 0017A9C4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8017DBC8 0017A9C8*/ PPC::Runtime::ASM::b(.L_8017DD38);
RUNTIME_PPC_JUMP_LABEL(.L_8017DBCC, 0x8017DBCC) //this is a jump label
/*8017DBCC 0017A9CC*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*8017DBD0 0017A9D0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DBD4 0017A9D4*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8017DBD8 0017A9D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8017DBDC 0017A9DC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DBE0 0017A9E0*/ PPC::Runtime::ASM::bne(.L_8017DC10);
/*8017DBE4 0017A9E4*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8017DBE8 0017A9E8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DBEC 0017A9EC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DBF0 0017A9F0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DBF4 0017A9F4*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8017DBF8 0017A9F8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0D94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DBFC 0017A9FC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8017DC00 0017AA00*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8017DC04 0017AA04*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8017DC08 0017AA08*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DC0C 0017AA0C*/ PPC::Runtime::ASM::b(.L_8017DD38);
RUNTIME_PPC_JUMP_LABEL(.L_8017DC10, 0x8017DC10) //this is a jump label
/*8017DC10 0017AA10*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8017DC14 0017AA14*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC18 0017AA18*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC1C 0017AA1C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC20 0017AA20*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8017DC24 0017AA24*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0DE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC28 0017AA28*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8017DC2C 0017AA2C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8017DC30 0017AA30*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8017DC34 0017AA34*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DC38 0017AA38*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8017DC3C 0017AA3C*/ PPC::Runtime::ASM::b(.L_8017DD38);
RUNTIME_PPC_JUMP_LABEL(.L_8017DC40, 0x8017DC40) //this is a jump label
/*8017DC40 0017AA40*/ PPC::Runtime::ASM::fsub(context->f2, context->f3, context->f0);
/*8017DC44 0017AA44*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0DC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC48 0017AA48*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8017DC4C 0017AA4C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8017DC50 0017AA50*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DC54 0017AA54*/ PPC::Runtime::ASM::bne(.L_8017DCC4);
/*8017DC58 0017AA58*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC5C 0017AA5C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8017DC60 0017AA60*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DC64 0017AA64*/ PPC::Runtime::ASM::bne(.L_8017DC94);
/*8017DC68 0017AA68*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8017DC6C 0017AA6C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC70 0017AA70*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC74 0017AA74*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC78 0017AA78*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8017DC7C 0017AA7C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0D94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC80 0017AA80*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8017DC84 0017AA84*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8017DC88 0017AA88*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8017DC8C 0017AA8C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DC90 0017AA90*/ PPC::Runtime::ASM::b(.L_8017DD34);
RUNTIME_PPC_JUMP_LABEL(.L_8017DC94, 0x8017DC94) //this is a jump label
/*8017DC94 0017AA94*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8017DC98 0017AA98*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DC9C 0017AA9C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DCA0 0017AAA0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DCA4 0017AAA4*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8017DCA8 0017AAA8*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0DE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DCAC 0017AAAC*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8017DCB0 0017AAB0*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8017DCB4 0017AAB4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8017DCB8 0017AAB8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DCBC 0017AABC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8017DCC0 0017AAC0*/ PPC::Runtime::ASM::b(.L_8017DD34);
RUNTIME_PPC_JUMP_LABEL(.L_8017DCC4, 0x8017DCC4) //this is a jump label
/*8017DCC4 0017AAC4*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*8017DCC8 0017AAC8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DCCC 0017AACC*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8017DCD0 0017AAD0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8017DCD4 0017AAD4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DCD8 0017AAD8*/ PPC::Runtime::ASM::bne(.L_8017DD08);
/*8017DCDC 0017AADC*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8017DCE0 0017AAE0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DCE4 0017AAE4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DCE8 0017AAE8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DCEC 0017AAEC*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8017DCF0 0017AAF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0D94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DCF4 0017AAF4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8017DCF8 0017AAF8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8017DCFC 0017AAFC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8017DD00 0017AB00*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DD04 0017AB04*/ PPC::Runtime::ASM::b(.L_8017DD34);
RUNTIME_PPC_JUMP_LABEL(.L_8017DD08, 0x8017DD08) //this is a jump label
/*8017DD08 0017AB08*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8017DD0C 0017AB0C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD10 0017AB10*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD14 0017AB14*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD18 0017AB18*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8017DD1C 0017AB1C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0DE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD20 0017AB20*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8017DD24 0017AB24*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8017DD28 0017AB28*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8017DD2C 0017AB2C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DD30 0017AB30*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8017DD34, 0x8017DD34) //this is a jump label
/*8017DD34 0017AB34*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8017DD38, 0x8017DD38) //this is a jump label
/*8017DD38 0017AB38*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*8017DD3C 0017AB3C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8017DD40, 0x8017DD40) //this is a jump label
/*8017DD40 0017AB40*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD44 0017AB44*/ PPC::Runtime::ASM::b(.L_8017DD50);
RUNTIME_PPC_JUMP_LABEL(.L_8017DD48, 0x8017DD48) //this is a jump label
/*8017DD48 0017AB48*/ PPC::Runtime::ASM::fsub(context->f1, context->f1, context->f0);
/*8017DD4C 0017AB4C*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
RUNTIME_PPC_JUMP_LABEL(.L_8017DD50, 0x8017DD50) //this is a jump label
/*8017DD50 0017AB50*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8017DD54 0017AB54*/ PPC::Runtime::ASM::bgt(.L_8017DD48);
/*8017DD58 0017AB58*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD5C 0017AB5C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8017DD60 0017AB60*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DD64 0017AB64*/ PPC::Runtime::ASM::bne(.L_8017DE58);
/*8017DD68 0017AB68*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E0DC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD6C 0017AB6C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f2);
/*8017DD70 0017AB70*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DD74 0017AB74*/ PPC::Runtime::ASM::bne(.L_8017DDE4);
/*8017DD78 0017AB78*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD7C 0017AB7C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8017DD80 0017AB80*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DD84 0017AB84*/ PPC::Runtime::ASM::bne(.L_8017DDB4);
/*8017DD88 0017AB88*/ PPC::Runtime::ASM::fmuls(context->f4, context->f1, context->f1);
/*8017DD8C 0017AB8C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E0DE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD90 0017AB90*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD94 0017AB94*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DD98 0017AB98*/ PPC::Runtime::ASM::fnmsubs(context->f2, context->f3, context->f4, context->f2);
/*8017DD9C 0017AB9C*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E0D94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DDA0 0017ABA0*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f2, context->f0);
/*8017DDA4 0017ABA4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8017DDA8 0017ABA8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f3, context->f0);
/*8017DDAC 0017ABAC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*8017DDB0 0017ABB0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8017DDB4, 0x8017DDB4) //this is a jump label
/*8017DDB4 0017ABB4*/ PPC::Runtime::ASM::fsub(context->f3, context->f2, context->f1);
/*8017DDB8 0017ABB8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DDBC 0017ABBC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DDC0 0017ABC0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DDC4 0017ABC4*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8017DDC8 0017ABC8*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0DE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DDCC 0017ABCC*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8017DDD0 0017ABD0*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8017DDD4 0017ABD4*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8017DDD8 0017ABD8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DDDC 0017ABDC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*8017DDE0 0017ABE0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8017DDE4, 0x8017DDE4) //this is a jump label
/*8017DDE4 0017ABE4*/ PPC::Runtime::ASM::fsub(context->f1, context->f0, context->f1);
/*8017DDE8 0017ABE8*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DDEC 0017ABEC*/ PPC::Runtime::ASM::frsp(context->f3, context->f1);
/*8017DDF0 0017ABF0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8017DDF4 0017ABF4*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DDF8 0017ABF8*/ PPC::Runtime::ASM::bne(.L_8017DE28);
/*8017DDFC 0017ABFC*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8017DE00 0017AC00*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE04 0017AC04*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE08 0017AC08*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE0C 0017AC0C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8017DE10 0017AC10*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0D94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE14 0017AC14*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8017DE18 0017AC18*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8017DE1C 0017AC1C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8017DE20 0017AC20*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f0);
/*8017DE24 0017AC24*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8017DE28, 0x8017DE28) //this is a jump label
/*8017DE28 0017AC28*/ PPC::Runtime::ASM::fsub(context->f3, context->f2, context->f3);
/*8017DE2C 0017AC2C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE30 0017AC30*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE34 0017AC34*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE38 0017AC38*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8017DE3C 0017AC3C*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0DE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE40 0017AC40*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8017DE44 0017AC44*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8017DE48 0017AC48*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8017DE4C 0017AC4C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DE50 0017AC50*/ PPC::Runtime::ASM::fsubs(context->f1, context->f4, context->f0);
/*8017DE54 0017AC54*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8017DE58, 0x8017DE58) //this is a jump label
/*8017DE58 0017AC58*/ PPC::Runtime::ASM::fsub(context->f2, context->f1, context->f0);
/*8017DE5C 0017AC5C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E0DC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE60 0017AC60*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8017DE64 0017AC64*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*8017DE68 0017AC68*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DE6C 0017AC6C*/ PPC::Runtime::ASM::bne(.L_8017DEDC);
/*8017DE70 0017AC70*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE74 0017AC74*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8017DE78 0017AC78*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DE7C 0017AC7C*/ PPC::Runtime::ASM::bne(.L_8017DEAC);
/*8017DE80 0017AC80*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8017DE84 0017AC84*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE88 0017AC88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE8C 0017AC8C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE90 0017AC90*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8017DE94 0017AC94*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0D94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DE98 0017AC98*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8017DE9C 0017AC9C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8017DEA0 0017ACA0*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8017DEA4 0017ACA4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DEA8 0017ACA8*/ PPC::Runtime::ASM::b(.L_8017DF4C);
RUNTIME_PPC_JUMP_LABEL(.L_8017DEAC, 0x8017DEAC) //this is a jump label
/*8017DEAC 0017ACAC*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8017DEB0 0017ACB0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DEB4 0017ACB4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DEB8 0017ACB8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DEBC 0017ACBC*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8017DEC0 0017ACC0*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0DE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DEC4 0017ACC4*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8017DEC8 0017ACC8*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8017DECC 0017ACCC*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8017DED0 0017ACD0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DED4 0017ACD4*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
/*8017DED8 0017ACD8*/ PPC::Runtime::ASM::b(.L_8017DF4C);
RUNTIME_PPC_JUMP_LABEL(.L_8017DEDC, 0x8017DEDC) //this is a jump label
/*8017DEDC 0017ACDC*/ PPC::Runtime::ASM::fsub(context->f2, context->f0, context->f3);
/*8017DEE0 0017ACE0*/ PPC::Runtime::ASM::lfd(context->f0, STRUCT_DOUBLE_COUNT_1805E0DF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DEE4 0017ACE4*/ PPC::Runtime::ASM::frsp(context->f3, context->f2);
/*8017DEE8 0017ACE8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*8017DEEC 0017ACEC*/ PPC::Runtime::ASM::cror(eq, lt, eq);
/*8017DEF0 0017ACF0*/ PPC::Runtime::ASM::bne(.L_8017DF20);
/*8017DEF4 0017ACF4*/ PPC::Runtime::ASM::fmuls(context->f4, context->f3, context->f3);
/*8017DEF8 0017ACF8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DEFC 0017ACFC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DF00 0017AD00*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DF04 0017AD04*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f4, context->f1);
/*8017DF08 0017AD08*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0D94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DF0C 0017AD0C*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f4, context->f1, context->f0);
/*8017DF10 0017AD10*/ PPC::Runtime::ASM::fmuls(context->f0, context->f4, context->f0);
/*8017DF14 0017AD14*/ PPC::Runtime::ASM::fsubs(context->f0, context->f2, context->f0);
/*8017DF18 0017AD18*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DF1C 0017AD1C*/ PPC::Runtime::ASM::b(.L_8017DF4C);
RUNTIME_PPC_JUMP_LABEL(.L_8017DF20, 0x8017DF20) //this is a jump label
/*8017DF20 0017AD20*/ PPC::Runtime::ASM::fsub(context->f3, context->f1, context->f3);
/*8017DF24 0017AD24*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0DF0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DF28 0017AD28*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0DEC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DF2C 0017AD2C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0DE8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DF30 0017AD30*/ PPC::Runtime::ASM::frsp(context->f3, context->f3);
/*8017DF34 0017AD34*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0DE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017DF38 0017AD38*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f3);
/*8017DF3C 0017AD3C*/ PPC::Runtime::ASM::fnmsubs(context->f1, context->f2, context->f3, context->f1);
/*8017DF40 0017AD40*/ PPC::Runtime::ASM::fnmsubs(context->f0, context->f3, context->f1, context->f0);
/*8017DF44 0017AD44*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8017DF48 0017AD48*/ PPC::Runtime::ASM::fsubs(context->f0, context->f4, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_8017DF4C, 0x8017DF4C) //this is a jump label
/*8017DF4C 0017AD4C*/ PPC::Runtime::ASM::fneg(context->f1, context->f0);
/*8017DF50 0017AD50*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8017DF54, 0x8017DF54) //this is a jump label
/*8017DF54 0017AD54*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*8017DF58 0017AD58*/ PPC::Runtime::ASM::blr();
}