//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800604BC.hpp"
#include "fn_80060ED0.hpp"



void fn_80061168(PPC::Runtime::GCContext* context)
{
/*80061168 0005DF68*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8006116C 0005DF6C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80061170 0005DF70*/ PPC::Runtime::ASM::lis(context->r4, lbl_8054FAB0 @ Get_MemoryOffset_HighBit);
/*80061174 0005DF74*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80061178 0005DF78*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8006117C 0005DF7C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80061180 0005DF80*/ PPC::Runtime::ASM::addi(context->r3, context->r4, lbl_8054FAB0 @ Get_MemoryOffset_LowBit);
/*80061184 0005DF84*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80061188 0005DF88*/ PPC::Runtime::ASM::bl(fn_800604BC);
/*8006118C 0005DF8C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8054FAB0 @ Get_MemoryOffset_HighBit);
/*80061190 0005DF90*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80061194 0005DF94*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8054FAB0 @ Get_MemoryOffset_LowBit);
/*80061198 0005DF98*/ PPC::Runtime::ASM::bl(fn_80060ED0);
/*8006119C 0005DF9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800611A0 0005DFA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800611A4 0005DFA4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800611A8 0005DFA8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800611AC 0005DFAC*/ PPC::Runtime::ASM::blr();
}