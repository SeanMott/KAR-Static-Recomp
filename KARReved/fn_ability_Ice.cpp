//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_ability_ChangeSpeedometerDesign.hpp"
#include "fn_801B46F8.hpp"
#include "fn_801B46B4.hpp"
#include "fn_801B46F8.hpp"
#include "fn_801B46B4.hpp"
#include "fn_ability_Ice_giveHat.hpp"



void fn_ability_Ice(PPC::Runtime::GCContext* context)
{
/*801B454C 001B134C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B4550 001B1350*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B4554 001B1354*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1610 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B4558 001B1358*/ PPC::Runtime::ASM::li(context->r4, 0x3f);
/*801B455C 001B135C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B4560 001B1360*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801B4564 001B1364*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801B4568 001B1368*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E1614 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801B456C 001B136C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B4570 001B1370*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B4574 001B1374*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801B4578 001B1378*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801B457C 001B137C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B4580 001B1380*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*801B4584 001B1384*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*801B4588 001B1388*/ PPC::Runtime::ASM::bl(fn_ability_ChangeSpeedometerDesign);
/*801B458C 001B138C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801B4590 001B1390*/ PPC::Runtime::ASM::lis(context->r4, fn_801B46F8 @ Get_MemoryOffset_HighBit);
/*801B4594 001B1394*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f0, context->r31));
/*801B4598 001B1398*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*801B459C 001B139C*/ PPC::Runtime::ASM::lis(context->r3, fn_801B46B4 @ Get_MemoryOffset_HighBit);
/*801B45A0 001B13A0*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801B46F8 @ Get_MemoryOffset_LowBit);
/*801B45A4 001B13A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9f0, context->r31));
/*801B45A8 001B13A8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_801B46B4 @ Get_MemoryOffset_LowBit);
/*801B45AC 001B13AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B45B0 001B13B0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7f8, context->r31));
/*801B45B4 001B13B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e4, context->r31));
/*801B45B8 001B13B8*/ PPC::Runtime::ASM::bl(fn_ability_Ice_giveHat);
/*801B45BC 001B13BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B45C0 001B13C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B45C4 001B13C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B45C8 001B13C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B45CC 001B13CC*/ PPC::Runtime::ASM::blr();
}