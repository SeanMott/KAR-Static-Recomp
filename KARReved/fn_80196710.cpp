//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018A0C0.hpp"
#include "fn_8018A0E8.hpp"
#include "fn_80189D34.hpp"
#include "fn_8018A188.hpp"



void fn_80196710(PPC::Runtime::GCContext* context)
{
/*80196710 00193510*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80196714 00193514*/ PPC::Runtime::ASM::mflr(context->r0);
/*80196718 00193518*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8019671C 0019351C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80196720 00193520*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80196724 00193524*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80196728 00193528*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8019672C 0019352C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80196730 00193530*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80196734 00193534*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*80196738 00193538*/ PPC::Runtime::ASM::bl(fn_8018A0C0);
/*8019673C 0019353C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80196740 00193540*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80196744 00193544*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80196748 00193548*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8019674C 0019354C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80196750 00193550*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80196754 00193554*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80196758 00193558*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8019675C 0019355C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*80196760 00193560*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80196764 00193564*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80196768 00193568*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r29));
/*8019676C 0019356C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 4);
/*80196770 00193570*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*80196774 00193574*/ PPC::Runtime::ASM::bl(fn_8018A0E8);
/*80196778 00193578*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8019677C 0019357C*/ PPC::Runtime::ASM::bl(fn_80189D34);
/*80196780 00193580*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c8, context->r29));
/*80196784 00193584*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80196788 00193588*/ PPC::Runtime::ASM::bl(fn_8018A188);
/*8019678C 0019358C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80196790 00193590*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r1));
/*80196794 00193594*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1));
/*80196798 00193598*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8019679C 0019359C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801967A0 001935A0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*801967A4 001935A4*/ PPC::Runtime::ASM::blr();
}