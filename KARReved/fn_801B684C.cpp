//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801918BC.hpp"
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_801B69F0.hpp"
#include "fn_801B69D0.hpp"
#include "fn_801B69F0.hpp"
#include "fn_801B69D0.hpp"



void fn_801B684C(PPC::Runtime::GCContext* context)
{
/*801B684C 001B364C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B6850 001B3650*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B6854 001B3654*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B6858 001B3658*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B685C 001B365C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B6860 001B3660*/ PPC::Runtime::ASM::bl(fn_801918BC);
/*801B6864 001B3664*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1690 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B6868 001B3668*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B686C 001B366C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1694 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B6870 001B3670*/ PPC::Runtime::ASM::li(context->r4, 0x48);
/*801B6874 001B3674*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801B6878 001B3678*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801B687C 001B367C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801B6880 001B3680*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801B6884 001B3684*/ PPC::Runtime::ASM::lis(context->r4, fn_801B69F0 @ Get_MemoryOffset_HighBit);
/*801B6888 001B3688*/ PPC::Runtime::ASM::lis(context->r3, fn_801B69D0 @ Get_MemoryOffset_HighBit);
/*801B688C 001B368C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801B69F0 @ Get_MemoryOffset_LowBit);
/*801B6890 001B3690*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801B6894 001B3694*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f8, context->r31));
/*801B6898 001B3698*/ PPC::Runtime::ASM::addi(context->r3, context->r3, fn_801B69D0 @ Get_MemoryOffset_LowBit);
/*801B689C 001B369C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e4, context->r31));
/*801B68A0 001B36A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r31));
/*801B68A4 001B36A4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B68A8 001B36A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B68AC 001B36AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B68B0 001B36B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B68B4 001B36B4*/ PPC::Runtime::ASM::blr();
}