//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_ClampStick(PPC::Runtime::GCContext* context)
{
/*803DBA28 003D8828*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803DBA2C 003D882C*/ PPC::Runtime::ASM::lbz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803DBA30 003D8830*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*803DBA34 003D8834*/ PPC::Runtime::ASM::extsb(context->r12, context->r12);
/*803DBA38 003D8838*/ PPC::Runtime::ASM::mr(context->r11, context->r0);
/*803DBA3C 003D883C*/ PPC::Runtime::ASM::blt(.L_803DBA48);
/*803DBA40 003D8840*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803DBA44 003D8844*/ PPC::Runtime::ASM::b(.L_803DBA50);
RUNTIME_PPC_JUMP_LABEL(.L_803DBA48, 0x803DBA48) //this is a jump label
/*803DBA48 003D8848*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*803DBA4C 003D884C*/ PPC::Runtime::ASM::neg(context->r11, context->r11);
RUNTIME_PPC_JUMP_LABEL(.L_803DBA50, 0x803DBA50) //this is a jump label
/*803DBA50 003D8850*/ PPC::Runtime::ASM::cmpwi(context->r12, 0x0);
/*803DBA54 003D8854*/ PPC::Runtime::ASM::blt(.L_803DBA60);
/*803DBA58 003D8858*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*803DBA5C 003D885C*/ PPC::Runtime::ASM::b(.L_803DBA68);
RUNTIME_PPC_JUMP_LABEL(.L_803DBA60, 0x803DBA60) //this is a jump label
/*803DBA60 003D8860*/ PPC::Runtime::ASM::li(context->r8, -0x1);
/*803DBA64 003D8864*/ PPC::Runtime::ASM::neg(context->r12, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_803DBA68, 0x803DBA68) //this is a jump label
/*803DBA68 003D8868*/ PPC::Runtime::ASM::extsb(context->r7, context->r7);
/*803DBA6C 003D886C*/ PPC::Runtime::ASM::cmpw(context->r11, context->r7);
/*803DBA70 003D8870*/ PPC::Runtime::ASM::bgt(.L_803DBA7C);
/*803DBA74 003D8874*/ PPC::Runtime::ASM::li(context->r11, 0x0);
/*803DBA78 003D8878*/ PPC::Runtime::ASM::b(.L_803DBA80);
RUNTIME_PPC_JUMP_LABEL(.L_803DBA7C, 0x803DBA7C) //this is a jump label
/*803DBA7C 003D887C*/ PPC::Runtime::ASM::subf(context->r11, context->r7, context->r11);
RUNTIME_PPC_JUMP_LABEL(.L_803DBA80, 0x803DBA80) //this is a jump label
/*803DBA80 003D8880*/ PPC::Runtime::ASM::cmpw(context->r12, context->r7);
/*803DBA84 003D8884*/ PPC::Runtime::ASM::bgt(.L_803DBA90);
/*803DBA88 003D8888*/ PPC::Runtime::ASM::li(context->r12, 0x0);
/*803DBA8C 003D888C*/ PPC::Runtime::ASM::b(.L_803DBA94);
RUNTIME_PPC_JUMP_LABEL(.L_803DBA90, 0x803DBA90) //this is a jump label
/*803DBA90 003D8890*/ PPC::Runtime::ASM::subf(context->r12, context->r7, context->r12);
RUNTIME_PPC_JUMP_LABEL(.L_803DBA94, 0x803DBA94) //this is a jump label
/*803DBA94 003D8894*/ PPC::Runtime::ASM::cmpwi(context->r11, 0x0);
/*803DBA98 003D8898*/ PPC::Runtime::ASM::bne(.L_803DBAB4);
/*803DBA9C 003D889C*/ PPC::Runtime::ASM::cmpwi(context->r12, 0x0);
/*803DBAA0 003D88A0*/ PPC::Runtime::ASM::bne(.L_803DBAB4);
/*803DBAA4 003D88A4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803DBAA8 003D88A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803DBAAC 003D88AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803DBAB0 003D88B0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803DBAB4, 0x803DBAB4) //this is a jump label
/*803DBAB4 003D88B4*/ PPC::Runtime::ASM::extsb(context->r6, context->r6);
/*803DBAB8 003D88B8*/ PPC::Runtime::ASM::mullw(context->r9, context->r6, context->r12);
/*803DBABC 003D88BC*/ PPC::Runtime::ASM::mullw(context->r7, context->r6, context->r11);
/*803DBAC0 003D88C0*/ PPC::Runtime::ASM::cmpw(context->r9, context->r7);
/*803DBAC4 003D88C4*/ PPC::Runtime::ASM::bgt(.L_803DBB08);
/*803DBAC8 003D88C8*/ PPC::Runtime::ASM::extsb(context->r9, context->r5);
/*803DBACC 003D88CC*/ PPC::Runtime::ASM::subf(context->r5, context->r6, context->r9);
/*803DBAD0 003D88D0*/ PPC::Runtime::ASM::mullw(context->r5, context->r12, context->r5);
/*803DBAD4 003D88D4*/ PPC::Runtime::ASM::mullw(context->r9, context->r6, context->r9);
/*803DBAD8 003D88D8*/ PPC::Runtime::ASM::add(context->r7, context->r7, context->r5);
/*803DBADC 003D88DC*/ PPC::Runtime::ASM::cmpw(context->r9, context->r7);
/*803DBAE0 003D88E0*/ PPC::Runtime::ASM::bge(.L_803DBB44);
/*803DBAE4 003D88E4*/ PPC::Runtime::ASM::mullw(context->r6, context->r11, context->r9);
/*803DBAE8 003D88E8*/ PPC::Runtime::ASM::mullw(context->r5, context->r12, context->r9);
/*803DBAEC 003D88EC*/ PPC::Runtime::ASM::divw(context->r6, context->r6, context->r7);
/*803DBAF0 003D88F0*/ PPC::Runtime::ASM::divw(context->r5, context->r5, context->r7);
/*803DBAF4 003D88F4*/ PPC::Runtime::ASM::extsb(context->r6, context->r6);
/*803DBAF8 003D88F8*/ PPC::Runtime::ASM::extsb(context->r5, context->r5);
/*803DBAFC 003D88FC*/ PPC::Runtime::ASM::addi(context->r11, context->r6, 0x0);
/*803DBB00 003D8900*/ PPC::Runtime::ASM::addi(context->r12, context->r5, 0x0);
/*803DBB04 003D8904*/ PPC::Runtime::ASM::b(.L_803DBB44);
RUNTIME_PPC_JUMP_LABEL(.L_803DBB08, 0x803DBB08) //this is a jump label
/*803DBB08 003D8908*/ PPC::Runtime::ASM::extsb(context->r7, context->r5);
/*803DBB0C 003D890C*/ PPC::Runtime::ASM::subf(context->r5, context->r6, context->r7);
/*803DBB10 003D8910*/ PPC::Runtime::ASM::mullw(context->r5, context->r11, context->r5);
/*803DBB14 003D8914*/ PPC::Runtime::ASM::mullw(context->r10, context->r6, context->r7);
/*803DBB18 003D8918*/ PPC::Runtime::ASM::add(context->r7, context->r9, context->r5);
/*803DBB1C 003D891C*/ PPC::Runtime::ASM::cmpw(context->r10, context->r7);
/*803DBB20 003D8920*/ PPC::Runtime::ASM::bge(.L_803DBB44);
/*803DBB24 003D8924*/ PPC::Runtime::ASM::mullw(context->r6, context->r11, context->r10);
/*803DBB28 003D8928*/ PPC::Runtime::ASM::mullw(context->r5, context->r12, context->r10);
/*803DBB2C 003D892C*/ PPC::Runtime::ASM::divw(context->r6, context->r6, context->r7);
/*803DBB30 003D8930*/ PPC::Runtime::ASM::divw(context->r5, context->r5, context->r7);
/*803DBB34 003D8934*/ PPC::Runtime::ASM::extsb(context->r6, context->r6);
/*803DBB38 003D8938*/ PPC::Runtime::ASM::extsb(context->r5, context->r5);
/*803DBB3C 003D893C*/ PPC::Runtime::ASM::addi(context->r11, context->r6, 0x0);
/*803DBB40 003D8940*/ PPC::Runtime::ASM::addi(context->r12, context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803DBB44, 0x803DBB44) //this is a jump label
/*803DBB44 003D8944*/ PPC::Runtime::ASM::mullw(context->r5, context->r0, context->r11);
/*803DBB48 003D8948*/ PPC::Runtime::ASM::mullw(context->r0, context->r8, context->r12);
/*803DBB4C 003D894C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803DBB50 003D8950*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803DBB54 003D8954*/ PPC::Runtime::ASM::blr();
}