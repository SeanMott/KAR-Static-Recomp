//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_stGetCurrentStageKind.hpp"
#include "fn_80102B28.hpp"
#include "fn_80102B28.hpp"



void fn_8010FA0C(PPC::Runtime::GCContext* context)
{
/*8010FA0C 0010C80C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8010FA10 0010C810*/ PPC::Runtime::ASM::mflr(context->r0);
/*8010FA14 0010C814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010FA18 0010C818*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010FA1C 0010C81C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8010FA20 0010C820*/ PPC::Runtime::ASM::bl(fn_stGetCurrentStageKind);
/*8010FA24 0010C824*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x13);
/*8010FA28 0010C828*/ PPC::Runtime::ASM::bne(.L_8010FA44);
/*8010FA2C 0010C82C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010FA30 0010C830*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8010FA34 0010C834*/ PPC::Runtime::ASM::bl(fn_80102B28);
/*8010FA38 0010C838*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8010FA3C 0010C83C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8010FA40 0010C840*/ PPC::Runtime::ASM::bl(fn_80102B28);
RUNTIME_PPC_JUMP_LABEL(.L_8010FA44, 0x8010FA44) //this is a jump label
/*8010FA44 0010C844*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8010FA48 0010C848*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010FA4C 0010C84C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8010FA50 0010C850*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8010FA54 0010C854*/ PPC::Runtime::ASM::blr();
}