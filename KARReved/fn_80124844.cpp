//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112050.hpp"
#include "fn_80059520.hpp"



void fn_80124844(PPC::Runtime::GCContext* context)
{
/*80124844 00121644*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80124848 00121648*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012484C 0012164C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124850 00121650*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80124854 00121654*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80124858 00121658*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012485C 0012165C*/ PPC::Runtime::ASM::bl(fn_80112050);
/*80124860 00121660*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1082 @ Get_MemoryOffset_HighBit);
/*80124864 00121664*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80124868 00121668*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1082 @ Get_MemoryOffset_LowBit);
/*8012486C 0012166C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80124870 00121670*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x330);
/*80124874 00121674*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80124878 00121678*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8012487C 0012167C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124880 00121680*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80124884 00121684*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80124888 00121688*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8012488C 0012168C*/ PPC::Runtime::ASM::blr();
}