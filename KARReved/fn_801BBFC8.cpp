//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"
#include "fn_801A2D80.hpp"
#include "fn_801907E8.hpp"
#include "fn_801A2E7C.hpp"
#include "fn_801A2FE8.hpp"



void fn_801BBFC8(PPC::Runtime::GCContext* context)
{
/*801BBFC8 001B8DC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801BBFCC 001B8DCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BBFD0 001B8DD0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E17BC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBFD4 001B8DD4*/ PPC::Runtime::ASM::li(context->r4, 0x75);
/*801BBFD8 001B8DD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801BBFDC 001B8DDC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801BBFE0 001B8DE0*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E17B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801BBFE4 001B8DE4*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801BBFE8 001B8DE8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801BBFEC 001B8DEC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BBFF0 001B8DF0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801BBFF4 001B8DF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x808, context->r3));
/*801BBFF8 001B8DF8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r3));
/*801BBFFC 001B8DFC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*801BC000 001B8E00*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r3));
/*801BC004 001B8E04*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r3));
/*801BC008 001B8E08*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801BC00C 001B8E0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BC010 001B8E10*/ PPC::Runtime::ASM::bl(fn_801A2D80);
/*801BC014 001B8E14*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r31));
/*801BC018 001B8E18*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BC01C 001B8E1C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801BC020 001B8E20*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x330);
/*801BC024 001B8E24*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801BC028 001B8E28*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801BC02C 001B8E2C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x328, context->r31));
/*801BC030 001B8E30*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801BC034 001B8E34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BC038 001B8E38*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x32c, context->r31));
/*801BC03C 001B8E3C*/ PPC::Runtime::ASM::fneg(context->f0, context->f0);
/*801BC040 001B8E40*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801BC044 001B8E44*/ PPC::Runtime::ASM::bl(fn_801907E8);
/*801BC048 001B8E48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BC04C 001B8E4C*/ PPC::Runtime::ASM::bl(fn_801A2E7C);
/*801BC050 001B8E50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BC054 001B8E54*/ PPC::Runtime::ASM::bl(fn_801A2FE8);
/*801BC058 001B8E58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801BC05C 001B8E5C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801BC060 001B8E60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BC064 001B8E64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801BC068 001B8E68*/ PPC::Runtime::ASM::blr();
}