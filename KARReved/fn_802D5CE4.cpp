//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802D8AC8.hpp"
#include "fn_802FBAF0.hpp"



void fn_802D5CE4(PPC::Runtime::GCContext* context)
{
/*802D5CE4 002D2AE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802D5CE8 002D2AE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D5CEC 002D2AEC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*802D5CF0 002D2AF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D5CF4 002D2AF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D5CF8 002D2AF8*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*802D5CFC 002D2AFC*/ PPC::Runtime::ASM::li(context->r6, lbl_805D9098 @ Get_MemoryOffset_SDA21);
/*802D5D00 002D2B00*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D5D04 002D2B04*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*802D5D08 002D2B08*/ PPC::Runtime::ASM::li(context->r5, lbl_805D90F0 @ Get_MemoryOffset_SDA21);
/*802D5D0C 002D2B0C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D5D10 002D2B10*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*802D5D14 002D2B14*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802D5D18 002D2B18*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D5D1C 002D2B1C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*802D5D20 002D2B20*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*802D5D24 002D2B24*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*802D5D28 002D2B28*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D5D2C 002D2B2C*/ PPC::Runtime::ASM::bne(.L_802D5D84);
/*802D5D30 002D2B30*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x138, context->r28));
/*802D5D34 002D2B34*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802D5D38 002D2B38*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802D5D3C 002D2B3C*/ PPC::Runtime::ASM::bge(.L_802D5D84);
/*802D5D40 002D2B40*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*802D5D44 002D2B44*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*802D5D48 002D2B48*/ PPC::Runtime::ASM::bl(fn_802D8AC8);
/*802D5D4C 002D2B4C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r28));
/*802D5D50 002D2B50*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*802D5D54 002D2B54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D5D58 002D2B58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r12));
/*802D5D5C 002D2B5C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D5D60 002D2B60*/ PPC::Runtime::ASM::bctrl();
/*802D5D64 002D2B64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r28));
/*802D5D68 002D2B68*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802D5D6C 002D2B6C*/ PPC::Runtime::ASM::beq(.L_802D5D84);
/*802D5D70 002D2B70*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*802D5D74 002D2B74*/ PPC::Runtime::ASM::mr(context->r6, context->r30);
/*802D5D78 002D2B78*/ PPC::Runtime::ASM::mr(context->r7, context->r31);
/*802D5D7C 002D2B7C*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x80);
/*802D5D80 002D2B80*/ PPC::Runtime::ASM::bl(fn_802FBAF0);
RUNTIME_PPC_JUMP_LABEL(.L_802D5D84, 0x802D5D84) //this is a jump label
/*802D5D84 002D2B84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802D5D88 002D2B88*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802D5D8C 002D2B8C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802D5D90 002D2B90*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D5D94 002D2B94*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802D5D98 002D2B98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D5D9C 002D2B9C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802D5DA0 002D2BA0*/ PPC::Runtime::ASM::blr();
}