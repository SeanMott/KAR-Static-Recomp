//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_PObjReqAnimAllByFlags.hpp"
#include "fn_HSD_MObjReqAnimByFlags.hpp"



void fn_HSD_DObjReqAnimAllByFlags(PPC::Runtime::GCContext* context)
{
/*803F4570 003F1370*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803F4574 003F1374*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F4578 003F1378*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803F457C 003F137C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803F4580 003F1380*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803F4584 003F1384*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*803F4588 003F1388*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F458C 003F138C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803F4590 003F1390*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*803F4594 003F1394*/ PPC::Runtime::ASM::beq(.L_803F45D4);
/*803F4598 003F1398*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803F459C 003F139C*/ PPC::Runtime::ASM::b(.L_803F45CC);
RUNTIME_PPC_JUMP_LABEL(.L_803F45A0, 0x803F45A0) //this is a jump label
/*803F45A0 003F13A0*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803F45A4 003F13A4*/ PPC::Runtime::ASM::beq(.L_803F45C8);
/*803F45A8 003F13A8*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*803F45AC 003F13AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803F45B0 003F13B0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*803F45B4 003F13B4*/ PPC::Runtime::ASM::bl(fn_HSD_PObjReqAnimAllByFlags);
/*803F45B8 003F13B8*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*803F45BC 003F13BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803F45C0 003F13C0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*803F45C4 003F13C4*/ PPC::Runtime::ASM::bl(fn_HSD_MObjReqAnimByFlags);
RUNTIME_PPC_JUMP_LABEL(.L_803F45C8, 0x803F45C8) //this is a jump label
/*803F45C8 003F13C8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803F45CC, 0x803F45CC) //this is a jump label
/*803F45CC 003F13CC*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*803F45D0 003F13D0*/ PPC::Runtime::ASM::bne(.L_803F45A0);
RUNTIME_PPC_JUMP_LABEL(.L_803F45D4, 0x803F45D4) //this is a jump label
/*803F45D4 003F13D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803F45D8 003F13D8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803F45DC 003F13DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F45E0 003F13E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803F45E4 003F13E4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F45E8 003F13E8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803F45EC 003F13EC*/ PPC::Runtime::ASM::blr();
}