//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_8019FBF4.hpp"



void fn_801C2660(PPC::Runtime::GCContext* context)
{
/*801C2660 001BF460*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C2664 001BF464*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C2668 001BF468*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1934 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C266C 001BF46C*/ PPC::Runtime::ASM::li(context->r4, 0x2b);
/*801C2670 001BF470*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C2674 001BF474*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801C2678 001BF478*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801C267C 001BF47C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1930 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C2680 001BF480*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C2684 001BF484*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C2688 001BF488*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801C268C 001BF48C*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801C2690 001BF490*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C2694 001BF494*/ PPC::Runtime::ASM::bl(fn_8019FBF4);
/*801C2698 001BF498*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C269C 001BF49C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C26A0 001BF4A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C26A4 001BF4A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C26A8 001BF4A8*/ PPC::Runtime::ASM::blr();
}