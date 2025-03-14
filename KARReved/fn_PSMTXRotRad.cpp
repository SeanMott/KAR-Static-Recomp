//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_sin2.hpp"
#include "fn_tanf.hpp"
#include "fn_PSMTXRotTrig.hpp"



void fn_PSMTXRotRad(PPC::Runtime::GCContext* context)
{
/*803D1738 003CE538*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D173C 003CE53C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D1740 003CE540*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*803D1744 003CE544*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D1748 003CE548*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D174C 003CE54C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D1750 003CE550*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*803D1754 003CE554*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803D1758 003CE558*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803D175C 003CE55C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*803D1760 003CE560*/ PPC::Runtime::ASM::bl(fn_sin2);
/*803D1764 003CE564*/ PPC::Runtime::ASM::fmr(context->f0, context->f1);
/*803D1768 003CE568*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*803D176C 003CE56C*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
/*803D1770 003CE570*/ PPC::Runtime::ASM::bl(fn_tanf);
/*803D1774 003CE574*/ PPC::Runtime::ASM::fmr(context->f0, context->f1);
/*803D1778 003CE578*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803D177C 003CE57C*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*803D1780 003CE580*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803D1784 003CE584*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
/*803D1788 003CE588*/ PPC::Runtime::ASM::bl(fn_PSMTXRotTrig);
/*803D178C 003CE58C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803D1790 003CE590*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803D1794 003CE594*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D1798 003CE598*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803D179C 003CE59C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*803D17A0 003CE5A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D17A4 003CE5A4*/ PPC::Runtime::ASM::blr();
}