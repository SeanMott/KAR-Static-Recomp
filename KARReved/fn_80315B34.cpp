//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80315B34(PPC::Runtime::GCContext* context)
{
/*80315B34 00312934*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80315B38 00312938*/ PPC::Runtime::ASM::mflr(context->r0);
/*80315B3C 0031293C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80315B40 00312940*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80315B44 00312944*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*80315B48 00312948*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80315B4C 0031294C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80315B50 00312950*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r4));
/*80315B54 00312954*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80315B58 00312958*/ PPC::Runtime::ASM::beq(.L_80315B60);
/*80315B5C 0031295C*/ PPC::Runtime::ASM::b(.L_80315B64);
RUNTIME_PPC_JUMP_LABEL(.L_80315B60, 0x80315B60) //this is a jump label
/*80315B60 00312960*/ PPC::Runtime::ASM::li(context->r4, lbl_805DA080 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_80315B64, 0x80315B64) //this is a jump label
/*80315B64 00312964*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA0FC @ Get_MemoryOffset_SDA21);
/*80315B68 00312968*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80315B6C 0031296C*/ PPC::Runtime::ASM::bl(fn_strncmp);
/*80315B70 00312970*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80315B74 00312974*/ PPC::Runtime::ASM::beq(.L_80315BA4);
/*80315B78 00312978*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r30));
/*80315B7C 0031297C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80315B80 00312980*/ PPC::Runtime::ASM::beq(.L_80315B88);
/*80315B84 00312984*/ PPC::Runtime::ASM::b(.L_80315B8C);
RUNTIME_PPC_JUMP_LABEL(.L_80315B88, 0x80315B88) //this is a jump label
/*80315B88 00312988*/ PPC::Runtime::ASM::li(context->r4, lbl_805DA080 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_80315B8C, 0x80315B8C) //this is a jump label
/*80315B8C 0031298C*/ PPC::Runtime::ASM::li(context->r3, lbl_805DA104 @ Get_MemoryOffset_SDA21);
/*80315B90 00312990*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80315B94 00312994*/ PPC::Runtime::ASM::bl(fn_strncmp);
/*80315B98 00312998*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80315B9C 0031299C*/ PPC::Runtime::ASM::beq(.L_80315BA4);
/*80315BA0 003129A0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80315BA4, 0x80315BA4) //this is a jump label
/*80315BA4 003129A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80315BA8 003129A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80315BAC 003129AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80315BB0 003129B0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80315BB4 003129B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80315BB8 003129B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80315BBC 003129BC*/ PPC::Runtime::ASM::blr();
}