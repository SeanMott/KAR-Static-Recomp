//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80311DB0.hpp"
#include "fn_80311EA0.hpp"
#include "fn_80311D04.hpp"



void fn_802A06BC(PPC::Runtime::GCContext* context)
{
/*802A06BC 0029D4BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802A06C0 0029D4C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802A06C4 0029D4C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802A06C8 0029D4C8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802A06CC 0029D4CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802A06D0 0029D4D0*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*802A06D4 0029D4D4*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A06D8 0029D4D8*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*802A06DC 0029D4DC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802A06E0 0029D4E0*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*802A06E4 0029D4E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802A06E8 0029D4E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*802A06EC 0029D4EC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802A06F0 0029D4F0*/ PPC::Runtime::ASM::bctrl();
/*802A06F4 0029D4F4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A06F8 0029D4F8*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 24);
/*802A06FC 0029D4FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*802A0700 0029D500*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802A0704 0029D504*/ PPC::Runtime::ASM::bl(fn_80311DB0);
/*802A0708 0029D508*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802A070C 0029D50C*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*802A0710 0029D510*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*802A0714 0029D514*/ PPC::Runtime::ASM::bl(fn_80311EA0);
/*802A0718 0029D518*/ PPC::Runtime::ASM::lbz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802A071C 0029D51C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*802A0720 0029D520*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*802A0724 0029D524*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*802A0728 0029D528*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*802A072C 0029D52C*/ PPC::Runtime::ASM::bl(fn_80311D04);
/*802A0730 0029D530*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802A0734 0029D534*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802A0738 0029D538*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802A073C 0029D53C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*802A0740 0029D540*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802A0744 0029D544*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802A0748 0029D548*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802A074C 0029D54C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802A0750 0029D550*/ PPC::Runtime::ASM::blr();
}