//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801918BC.hpp"
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_801A1724.hpp"
#include "fn_801A1720.hpp"
#include "fn_801A1724.hpp"
#include "fn_801A1720.hpp"



void fn_801A1790(PPC::Runtime::GCContext* context)
{
/*801A1790 0019E590*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A1794 0019E594*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A1798 0019E598*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A179C 0019E59C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A17A0 0019E5A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A17A4 0019E5A4*/ PPC::Runtime::ASM::bl(fn_801918BC);
/*801A17A8 0019E5A8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1270 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A17AC 0019E5AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A17B0 0019E5B0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1274 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A17B4 0019E5B4*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*801A17B8 0019E5B8*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801A17BC 0019E5BC*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801A17C0 0019E5C0*/ PPC::Runtime::ASM::li(context->r6, 0x4);
/*801A17C4 0019E5C4*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801A17C8 0019E5C8*/ PPC::Runtime::ASM::lis(context->r3, fn_801A1724 @ Get_MemoryOffset_HighBit);
/*801A17CC 0019E5CC*/ PPC::Runtime::ASM::lis(context->r4, fn_801A1720 @ Get_MemoryOffset_HighBit);
/*801A17D0 0019E5D0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801A1724 @ Get_MemoryOffset_LowBit);
/*801A17D4 0019E5D4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801A17D8 0019E5D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f8, context->r31));
/*801A17DC 0019E5DC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, fn_801A1720 @ Get_MemoryOffset_LowBit);
/*801A17E0 0019E5E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e4, context->r31));
/*801A17E4 0019E5E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r31));
/*801A17E8 0019E5E8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801A17EC 0019E5EC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r31));
/*801A17F0 0019E5F0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r31));
/*801A17F4 0019E5F4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 1, 30, 30);
/*801A17F8 0019E5F8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x823, context->r31));
/*801A17FC 0019E5FC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A1800 0019E600*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A1804 0019E604*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A1808 0019E608*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A180C 0019E60C*/ PPC::Runtime::ASM::blr();
}