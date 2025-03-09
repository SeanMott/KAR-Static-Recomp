//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_WObjSetPosition.hpp"
#include "fn_HSD_RObjRemoveAll.hpp"
#include "fn_HSD_RObjLoadDesc.hpp"
#include "fn_HSD_RObjResolveRefsAll.hpp"



void fn_WObjLoad(PPC::Runtime::GCContext* context)
{
/*8041AA38 00417838*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041AA3C 0041783C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8041AA40 00417840*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041AA44 00417844*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041AA48 00417848*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8041AA4C 0041784C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x4);
/*8041AA50 00417850*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041AA54 00417854*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8041AA58 00417858*/ PPC::Runtime::ASM::bl(fn_HSD_WObjSetPosition);
/*8041AA5C 0041785C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8041AA60 00417860*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8041AA64 00417864*/ PPC::Runtime::ASM::beq(.L_8041AA6C);
/*8041AA68 00417868*/ PPC::Runtime::ASM::bl(fn_HSD_RObjRemoveAll);
RUNTIME_PPC_JUMP_LABEL(.L_8041AA6C, 0x8041AA6C) //this is a jump label
/*8041AA6C 0041786C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8041AA70 00417870*/ PPC::Runtime::ASM::bl(fn_HSD_RObjLoadDesc);
/*8041AA74 00417874*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8041AA78 00417878*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8041AA7C 0041787C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8041AA80 00417880*/ PPC::Runtime::ASM::bl(fn_HSD_RObjResolveRefsAll);
/*8041AA84 00417884*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041AA88 00417888*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8041AA8C 0041788C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8041AA90 00417890*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8041AA94 00417894*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041AA98 00417898*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041AA9C 0041789C*/ PPC::Runtime::ASM::blr();
}