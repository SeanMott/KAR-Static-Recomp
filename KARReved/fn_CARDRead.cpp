//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___CARDSyncCallback.hpp"
#include "fn___CARDSyncCallback.hpp"
#include "fn_CARDReadAsync.hpp"
#include "fn___CARDSync.hpp"



void fn_CARDRead(PPC::Runtime::GCContext* context)
{
/*803E7A88 003E4888*/ PPC::Runtime::ASM::mflr(context->r0);
/*803E7A8C 003E488C*/ PPC::Runtime::ASM::lis(context->r7, fn___CARDSyncCallback @ Get_MemoryOffset_HighBit);
/*803E7A90 003E4890*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803E7A94 003E4894*/ PPC::Runtime::ASM::addi(context->r7, context->r7, fn___CARDSyncCallback @ Get_MemoryOffset_LowBit);
/*803E7A98 003E4898*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803E7A9C 003E489C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7AA0 003E48A0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803E7AA4 003E48A4*/ PPC::Runtime::ASM::bl(fn_CARDReadAsync);
/*803E7AA8 003E48A8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E7AAC 003E48AC*/ PPC::Runtime::ASM::bge(.L_803E7AB4);
/*803E7AB0 003E48B0*/ PPC::Runtime::ASM::b(.L_803E7ABC);
RUNTIME_PPC_JUMP_LABEL(.L_803E7AB4, 0x803E7AB4) //this is a jump label
/*803E7AB4 003E48B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803E7AB8 003E48B8*/ PPC::Runtime::ASM::bl(fn___CARDSync);
RUNTIME_PPC_JUMP_LABEL(.L_803E7ABC, 0x803E7ABC) //this is a jump label
/*803E7ABC 003E48BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803E7AC0 003E48C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803E7AC4 003E48C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803E7AC8 003E48C8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803E7ACC 003E48CC*/ PPC::Runtime::ASM::blr();
}