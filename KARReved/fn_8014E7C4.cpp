//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8014E2B8.hpp"



void fn_8014E7C4(PPC::Runtime::GCContext* context)
{
/*8014E7C4 0014B5C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8014E7C8 0014B5C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014E7CC 0014B5CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014E7D0 0014B5D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014E7D4 0014B5D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014E7D8 0014B5D8*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014E7DC 0014B5DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8014E7E0 0014B5E0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8014E7E4 0014B5E4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8014E7E8 0014B5E8*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
/*8014E7EC 0014B5EC*/ PPC::Runtime::ASM::bl(fn_8014E2B8);
/*8014E7F0 0014B5F0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8014E7F4 0014B5F4*/ PPC::Runtime::ASM::bne(.L_8014E808);
/*8014E7F8 0014B5F8*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6728 @ Get_MemoryOffset_SDA21);
/*8014E7FC 0014B5FC*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*8014E800 0014B600*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6730 @ Get_MemoryOffset_SDA21);
/*8014E804 0014B604*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8014E808, 0x8014E808) //this is a jump label
/*8014E808 0014B608*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8014E80C 0014B60C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014E810 0014B610*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8014E814 0014B614*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*8014E818 0014B618*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8014E81C 0014B61C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*8014E820 0014B620*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8014E824 0014B624*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*8014E828 0014B628*/ PPC::Runtime::ASM::bne(.L_8014E874);
/*8014E82C 0014B62C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8014E830 0014B630*/ PPC::Runtime::ASM::beq(.L_8014E874);
/*8014E834 0014B634*/ PPC::Runtime::ASM::bne(.L_8014E848);
/*8014E838 0014B638*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6728 @ Get_MemoryOffset_SDA21);
/*8014E83C 0014B63C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8014E840 0014B640*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6730 @ Get_MemoryOffset_SDA21);
/*8014E844 0014B644*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8014E848, 0x8014E848) //this is a jump label
/*8014E848 0014B648*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8014E84C 0014B64C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8014E850 0014B650*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8014E854 0014B654*/ PPC::Runtime::ASM::bne(.L_8014E864);
/*8014E858 0014B658*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8014E85C 0014B65C*/ PPC::Runtime::ASM::beq(.L_8014E864);
/*8014E860 0014B660*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8014E864, 0x8014E864) //this is a jump label
/*8014E864 0014B664*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8014E868 0014B668*/ PPC::Runtime::ASM::bne(.L_8014E874);
/*8014E86C 0014B66C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8014E870 0014B670*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8014E874, 0x8014E874) //this is a jump label
/*8014E874 0014B674*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8014E878 0014B678*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8014E87C 0014B67C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014E880 0014B680*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8014E884 0014B684*/ PPC::Runtime::ASM::blr();
}