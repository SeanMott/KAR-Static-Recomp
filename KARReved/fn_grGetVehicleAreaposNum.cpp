//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DA618.hpp"
#include "fn_800DA618.hpp"



void fn_grGetVehicleAreaposNum(PPC::Runtime::GCContext* context)
{
/*800D16C4 000CE4C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800D16C8 000CE4C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*800D16CC 000CE4CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D16D0 000CE4D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D16D4 000CE4D4*/ PPC::Runtime::ASM::lwz(context->r31, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800D16D8 000CE4D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D16DC 000CE4DC*/ PPC::Runtime::ASM::bl(fn_800DA618);
/*800D16E0 000CE4E0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800D16E4 000CE4E4*/ PPC::Runtime::ASM::beq(.L_800D1704);
/*800D16E8 000CE4E8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800D16EC 000CE4EC*/ PPC::Runtime::ASM::bl(fn_800DA618);
/*800D16F0 000CE4F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800D16F4 000CE4F4*/ PPC::Runtime::ASM::srwi(context->r0, context->r3, 31);
/*800D16F8 000CE4F8*/ PPC::Runtime::ASM::add(context->r0, context->r0, context->r3);
/*800D16FC 000CE4FC*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800D1700 000CE500*/ PPC::Runtime::ASM::b(.L_800D1708);
RUNTIME_PPC_JUMP_LABEL(.L_800D1704, 0x800D1704) //this is a jump label
/*800D1704 000CE504*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800D1708, 0x800D1708) //this is a jump label
/*800D1708 000CE508*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800D170C 000CE50C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800D1710 000CE510*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800D1714 000CE514*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800D1718 000CE518*/ PPC::Runtime::ASM::blr();
}