//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D8F7C.hpp"
#include "fn_801D8B4C.hpp"
#include "fn_accelerateWheelie.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_BreakDown_3(PPC::Runtime::GCContext* context)
{
/*801FB400 001F8200*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FB404 001F8204*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FB408 001F8208*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FB40C 001F820C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FB410 001F8210*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801FB414 001F8214*/ PPC::Runtime::ASM::bl(fn_801D8F7C);
/*801FB418 001F8218*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB41C 001F821C*/ PPC::Runtime::ASM::bl(fn_801D8B4C);
/*801FB420 001F8220*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB424 001F8224*/ PPC::Runtime::ASM::bl(fn_accelerateWheelie);
/*801FB428 001F8228*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FB42C 001F822C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FB430 001F8230*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FB434 001F8234*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FB438 001F8238*/ PPC::Runtime::ASM::blr();
}