//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80155C14.hpp"



void fn_801587FC(PPC::Runtime::GCContext* context)
{
/*801587FC 001555FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80158800 00155600*/ PPC::Runtime::ASM::mflr(context->r0);
/*80158804 00155604*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80158808 00155608*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8015880C 0015560C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80158810 00155610*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80158814 00155614*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80158818 00155618*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8015881C 0015561C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80158820 00155620*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*80158824 00155624*/ PPC::Runtime::ASM::bl(fn_80155C14);
/*80158828 00155628*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8015882C 0015562C*/ PPC::Runtime::ASM::bne(.L_80158840);
/*80158830 00155630*/ PPC::Runtime::ASM::li(context->r3, lbl_805D68D0 @ Get_MemoryOffset_SDA21);
/*80158834 00155634*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80158838 00155638*/ PPC::Runtime::ASM::li(context->r5, lbl_805D68D8 @ Get_MemoryOffset_SDA21);
/*8015883C 0015563C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80158840, 0x80158840) //this is a jump label
/*80158840 00155640*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80158844 00155644*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80158848 00155648*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8015884C 0015564C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80158850 00155650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80158854 00155654*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80158858 00155658*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8015885C 0015565C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80158860 00155660*/ PPC::Runtime::ASM::bne(.L_801588AC);
/*80158864 00155664*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80158868 00155668*/ PPC::Runtime::ASM::beq(.L_801588AC);
/*8015886C 0015566C*/ PPC::Runtime::ASM::bne(.L_80158880);
/*80158870 00155670*/ PPC::Runtime::ASM::li(context->r3, lbl_805D68D0 @ Get_MemoryOffset_SDA21);
/*80158874 00155674*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80158878 00155678*/ PPC::Runtime::ASM::li(context->r5, lbl_805D68D8 @ Get_MemoryOffset_SDA21);
/*8015887C 0015567C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80158880, 0x80158880) //this is a jump label
/*80158880 00155680*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80158884 00155684*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80158888 00155688*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8015888C 0015568C*/ PPC::Runtime::ASM::bne(.L_8015889C);
/*80158890 00155690*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80158894 00155694*/ PPC::Runtime::ASM::beq(.L_8015889C);
/*80158898 00155698*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8015889C, 0x8015889C) //this is a jump label
/*8015889C 0015569C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801588A0 001556A0*/ PPC::Runtime::ASM::bne(.L_801588AC);
/*801588A4 001556A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801588A8 001556A8*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801588AC, 0x801588AC) //this is a jump label
/*801588AC 001556AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801588B0 001556B0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*801588B4 001556B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801588B8 001556B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801588BC 001556BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801588C0 001556C0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801588C4 001556C4*/ PPC::Runtime::ASM::blr();
}