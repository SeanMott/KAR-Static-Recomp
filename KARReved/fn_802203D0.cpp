//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80192360.hpp"
#include "fn_80055C7C.hpp"



void fn_802203D0(PPC::Runtime::GCContext* context)
{
/*802203D0 0021D1D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802203D4 0021D1D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802203D8 0021D1D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802203DC 0021D1DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802203E0 0021D1E0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*802203E4 0021D1E4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802203E8 0021D1E8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802203EC 0021D1EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802203F0 0021D1F0*/ PPC::Runtime::ASM::bl(fn_80192360);
/*802203F4 0021D1F4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r30));
/*802203F8 0021D1F8*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*802203FC 0021D1FC*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80220400 0021D200*/ PPC::Runtime::ASM::lwzx(context->r3, context->r5, context->r0);
/*80220404 0021D204*/ PPC::Runtime::ASM::bl(fn_80055C7C);
/*80220408 0021D208*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r30));
/*8022040C 0021D20C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80220410 0021D210*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 5, 26, 26);
/*80220414 0021D214*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b6, context->r30));
/*80220418 0021D218*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8022041C 0021D21C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80220420 0021D220*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80220424 0021D224*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80220428 0021D228*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8022042C 0021D22C*/ PPC::Runtime::ASM::blr();
}