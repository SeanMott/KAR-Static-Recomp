//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80391B1C.hpp"
#include "fn_80391C1C.hpp"



void fn_8039A380(PPC::Runtime::GCContext* context)
{
/*8039A380 00397180*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039A384 00397184*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039A388 00397188*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A38C 0039718C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A390 00397190*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A394 00397194*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039A398 00397198*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8039A39C 0039719C*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8039A3A0 003971A0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A3A4 003971A4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A3A8 003971A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039A3AC 003971AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A3B0 003971B0*/ PPC::Runtime::ASM::bctrl();
/*8039A3B4 003971B4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039A3B8 003971B8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A3BC 003971BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A3C0 003971C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039A3C4 003971C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A3C8 003971C8*/ PPC::Runtime::ASM::bctrl();
/*8039A3CC 003971CC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8039A3D0 003971D0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8039A3D4 003971D4*/ PPC::Runtime::ASM::li(context->r5, 0x5);
/*8039A3D8 003971D8*/ PPC::Runtime::ASM::bl(fn_80391C1C);
/*8039A3DC 003971DC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A3E0 003971E0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A3E4 003971E4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A3E8 003971E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039A3EC 003971EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039A3F0 003971F0*/ PPC::Runtime::ASM::blr();
}