//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___CARDSyncCallback.hpp"
#include "fn___CARDSyncCallback.hpp"
#include "fn_CARDWriteAsync.hpp"
#include "fn___CARDSync.hpp"



void fn_CARDWrite(PPC::Runtime::GCContext* context)
{
/*803E7E04 003E4C04*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E7E08 003E4C08*/ PPC::Runtime::ASM::lis(context->r7, fn___CARDSyncCallback @ Get_MemoryOffset_HighBit);
/*803E7E0C 003E4C0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E7E10 003E4C10*/ PPC::Runtime::ASM::addi(context->r7, context->r7, fn___CARDSyncCallback @ Get_MemoryOffset_LowBit);
/*803E7E14 003E4C14*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803E7E18 003E4C18*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7E1C 003E4C1C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803E7E20 003E4C20*/ PPC::Runtime::ASM::bl(fn_CARDWriteAsync);
/*803E7E24 003E4C24*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E7E28 003E4C28*/ PPC::Runtime::ASM::bge(.L_803E7E30);
/*803E7E2C 003E4C2C*/ PPC::Runtime::ASM::b(.L_803E7E38);
RUNTIME_PPC_JUMP_LABEL(.L_803E7E30, 0x803E7E30) //this is a jump label
/*803E7E30 003E4C30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803E7E34 003E4C34*/ PPC::Runtime::ASM::bl(fn___CARDSync);
RUNTIME_PPC_JUMP_LABEL(.L_803E7E38, 0x803E7E38) //this is a jump label
/*803E7E38 003E4C38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E7E3C 003E4C3C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7E40 003E4C40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803E7E44 003E4C44*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E7E48 003E4C48*/ PPC::Runtime::ASM::blr();
}