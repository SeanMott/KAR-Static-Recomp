//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80170784.hpp"
#include "fn_801709BC.hpp"
#include "fn_80170C00.hpp"
#include "fn_80171050.hpp"
#include "fn_80172A50.hpp"
#include "fn_80172E08.hpp"
#include "fn_801751A0.hpp"



void fn_801379C8(PPC::Runtime::GCContext* context)
{
/*801379C8 001347C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801379CC 001347CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801379D0 001347D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801379D4 001347D4*/ PPC::Runtime::ASM::bl(fn_80170784);
/*801379D8 001347D8*/ PPC::Runtime::ASM::bl(fn_801709BC);
/*801379DC 001347DC*/ PPC::Runtime::ASM::bl(fn_80170C00);
/*801379E0 001347E0*/ PPC::Runtime::ASM::bl(fn_80171050);
/*801379E4 001347E4*/ PPC::Runtime::ASM::bl(fn_80172A50);
/*801379E8 001347E8*/ PPC::Runtime::ASM::bl(fn_80172E08);
/*801379EC 001347EC*/ PPC::Runtime::ASM::bl(fn_801751A0);
/*801379F0 001347F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801379F4 001347F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801379F8 001347F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801379FC 001347FC*/ PPC::Runtime::ASM::blr();
}