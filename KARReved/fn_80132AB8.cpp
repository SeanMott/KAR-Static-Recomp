//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8014BF30.hpp"
#include "fn_8014C284.hpp"
#include "fn_8014C720.hpp"



void fn_80132AB8(PPC::Runtime::GCContext* context)
{
/*80132AB8 0012F8B8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80132ABC 0012F8BC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80132AC0 0012F8C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132AC4 0012F8C4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80132AC8 0012F8C8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80132ACC 0012F8CC*/ PPC::Runtime::ASM::beq(.L_80132AF8);
/*80132AD0 0012F8D0*/ PPC::Runtime::ASM::bge(.L_80132AE0);
/*80132AD4 0012F8D4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80132AD8 0012F8D8*/ PPC::Runtime::ASM::bge(.L_80132AEC);
/*80132ADC 0012F8DC*/ PPC::Runtime::ASM::b(.L_80132B0C);
RUNTIME_PPC_JUMP_LABEL(.L_80132AE0, 0x80132AE0) //this is a jump label
/*80132AE0 0012F8E0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*80132AE4 0012F8E4*/ PPC::Runtime::ASM::bge(.L_80132B0C);
/*80132AE8 0012F8E8*/ PPC::Runtime::ASM::b(.L_80132B04);
RUNTIME_PPC_JUMP_LABEL(.L_80132AEC, 0x80132AEC) //this is a jump label
/*80132AEC 0012F8EC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80132AF0 0012F8F0*/ PPC::Runtime::ASM::bl(fn_8014BF30);
/*80132AF4 0012F8F4*/ PPC::Runtime::ASM::b(.L_80132B0C);
RUNTIME_PPC_JUMP_LABEL(.L_80132AF8, 0x80132AF8) //this is a jump label
/*80132AF8 0012F8F8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80132AFC 0012F8FC*/ PPC::Runtime::ASM::bl(fn_8014C284);
/*80132B00 0012F900*/ PPC::Runtime::ASM::b(.L_80132B0C);
RUNTIME_PPC_JUMP_LABEL(.L_80132B04, 0x80132B04) //this is a jump label
/*80132B04 0012F904*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80132B08 0012F908*/ PPC::Runtime::ASM::bl(fn_8014C720);
RUNTIME_PPC_JUMP_LABEL(.L_80132B0C, 0x80132B0C) //this is a jump label
/*80132B0C 0012F90C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132B10 0012F910*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80132B14 0012F914*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80132B18 0012F918*/ PPC::Runtime::ASM::blr();
}