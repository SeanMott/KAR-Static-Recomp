//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018CB28.hpp"



void fn_80101DC4(PPC::Runtime::GCContext* context)
{
/*80101DC4 000FEBC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80101DC8 000FEBC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80101DCC 000FEBCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80101DD0 000FEBD0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80101DD4 000FEBD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r4));
/*80101DD8 000FEBD8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80101DDC 000FEBDC*/ PPC::Runtime::ASM::ble(.L_80101DFC);
/*80101DE0 000FEBE0*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80101DE4 000FEBE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r4));
/*80101DE8 000FEBE8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x140, context->r4));
/*80101DEC 000FEBEC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80101DF0 000FEBF0*/ PPC::Runtime::ASM::bgt(.L_80101DFC);
/*80101DF4 000FEBF4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r4));
/*80101DF8 000FEBF8*/ PPC::Runtime::ASM::bl(fn_8018CB28);
RUNTIME_PPC_JUMP_LABEL(.L_80101DFC, 0x80101DFC) //this is a jump label
/*80101DFC 000FEBFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80101E00 000FEC00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80101E04 000FEC04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80101E08 000FEC08*/ PPC::Runtime::ASM::blr();
}