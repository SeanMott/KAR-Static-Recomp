//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018CF84.hpp"
#include "fn_80192788.hpp"
#include "fn_8018D284.hpp"



void fn_8025226C(PPC::Runtime::GCContext* context)
{
/*8025226C 0024F06C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80252270 0024F070*/ PPC::Runtime::ASM::mflr(context->r0);
/*80252274 0024F074*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80252278 0024F078*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025227C 0024F07C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80252280 0024F080*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80252284 0024F084*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80252288 0024F088*/ PPC::Runtime::ASM::bl(fn_8018CF84);
/*8025228C 0024F08C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE334 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80252290 0024F090*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80252294 0024F094*/ PPC::Runtime::ASM::b(.L_802522B0);
RUNTIME_PPC_JUMP_LABEL(.L_80252298, 0x80252298) //this is a jump label
/*80252298 0024F098*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025229C 0024F09C*/ PPC::Runtime::ASM::bl(fn_80192788);
/*802522A0 0024F0A0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*802522A4 0024F0A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x148, context->r30));
/*802522A8 0024F0A8*/ PPC::Runtime::ASM::bl(fn_8018D284);
/*802522AC 0024F0AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_802522B0, 0x802522B0) //this is a jump label
/*802522B0 0024F0B0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*802522B4 0024F0B4*/ PPC::Runtime::ASM::bne(.L_80252298);
/*802522B8 0024F0B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802522BC 0024F0BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802522C0 0024F0C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802522C4 0024F0C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802522C8 0024F0C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802522CC 0024F0CC*/ PPC::Runtime::ASM::blr();
}