//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005BD8C(PPC::Runtime::GCContext* context)
{
/*8005BD8C 00058B8C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005BD90 00058B90*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8005BD94 00058B94*/ PPC::Runtime::ASM::addi(context->r5, context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005BD98 00058B98*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8005BD9C 00058B9C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8005BDA0, 0x8005BDA0) //this is a jump label
/*8005BDA0 00058BA0*/ PPC::Runtime::ASM::addis(context->r4, context->r5, 0x1);
/*8005BDA4 00058BA4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7384, context->r4));
/*8005BDA8 00058BA8*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8005BDAC 00058BAC*/ PPC::Runtime::ASM::bne(.L_8005BDB8);
/*8005BDB0 00058BB0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005BDB4 00058BB4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8005BDB8, 0x8005BDB8) //this is a jump label
/*8005BDB8 00058BB8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*8005BDBC 00058BBC*/ PPC::Runtime::ASM::addis(context->r4, context->r5, 0x1);
/*8005BDC0 00058BC0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7384, context->r4));
/*8005BDC4 00058BC4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8005BDC8 00058BC8*/ PPC::Runtime::ASM::bne(.L_8005BDD4);
/*8005BDCC 00058BCC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005BDD0 00058BD0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8005BDD4, 0x8005BDD4) //this is a jump label
/*8005BDD4 00058BD4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*8005BDD8 00058BD8*/ PPC::Runtime::ASM::addis(context->r4, context->r5, 0x1);
/*8005BDDC 00058BDC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7384, context->r4));
/*8005BDE0 00058BE0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8005BDE4 00058BE4*/ PPC::Runtime::ASM::bne(.L_8005BDF0);
/*8005BDE8 00058BE8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005BDEC 00058BEC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8005BDF0, 0x8005BDF0) //this is a jump label
/*8005BDF0 00058BF0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*8005BDF4 00058BF4*/ PPC::Runtime::ASM::addis(context->r4, context->r5, 0x1);
/*8005BDF8 00058BF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7384, context->r4));
/*8005BDFC 00058BFC*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8005BE00 00058C00*/ PPC::Runtime::ASM::bne(.L_8005BE0C);
/*8005BE04 00058C04*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005BE08 00058C08*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8005BE0C, 0x8005BE0C) //this is a jump label
/*8005BE0C 00058C0C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*8005BE10 00058C10*/ PPC::Runtime::ASM::addis(context->r4, context->r5, 0x1);
/*8005BE14 00058C14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7384, context->r4));
/*8005BE18 00058C18*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8005BE1C 00058C1C*/ PPC::Runtime::ASM::bne(.L_8005BE28);
/*8005BE20 00058C20*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005BE24 00058C24*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8005BE28, 0x8005BE28) //this is a jump label
/*8005BE28 00058C28*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*8005BE2C 00058C2C*/ PPC::Runtime::ASM::addis(context->r4, context->r5, 0x1);
/*8005BE30 00058C30*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7384, context->r4));
/*8005BE34 00058C34*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8005BE38 00058C38*/ PPC::Runtime::ASM::bne(.L_8005BE44);
/*8005BE3C 00058C3C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005BE40 00058C40*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8005BE44, 0x8005BE44) //this is a jump label
/*8005BE44 00058C44*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*8005BE48 00058C48*/ PPC::Runtime::ASM::addis(context->r4, context->r5, 0x1);
/*8005BE4C 00058C4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7384, context->r4));
/*8005BE50 00058C50*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8005BE54 00058C54*/ PPC::Runtime::ASM::bne(.L_8005BE60);
/*8005BE58 00058C58*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005BE5C 00058C5C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8005BE60, 0x8005BE60) //this is a jump label
/*8005BE60 00058C60*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*8005BE64 00058C64*/ PPC::Runtime::ASM::addis(context->r4, context->r5, 0x1);
/*8005BE68 00058C68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7384, context->r4));
/*8005BE6C 00058C6C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8005BE70 00058C70*/ PPC::Runtime::ASM::bne(.L_8005BE7C);
/*8005BE74 00058C74*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005BE78 00058C78*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8005BE7C, 0x8005BE7C) //this is a jump label
/*8005BE7C 00058C7C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*8005BE80 00058C80*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x7);
/*8005BE84 00058C84*/ PPC::Runtime::ASM::bdnz(.L_8005BDA0);
/*8005BE88 00058C88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8005BE8C 00058C8C*/ PPC::Runtime::ASM::blr();
}