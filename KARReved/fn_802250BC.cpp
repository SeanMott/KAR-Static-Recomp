//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802361A0.hpp"



void fn_802250BC(PPC::Runtime::GCContext* context)
{
/*802250BC 00221EBC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802250C0 00221EC0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802250C4 00221EC4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802250C8 00221EC8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802250CC 00221ECC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802250D0 00221ED0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r3));
/*802250D4 00221ED4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*802250D8 00221ED8*/ PPC::Runtime::ASM::bl(fn_802361A0);
/*802250DC 00221EDC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*802250E0 00221EE0*/ PPC::Runtime::ASM::bne(.L_802250EC);
/*802250E4 00221EE4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802250E8 00221EE8*/ PPC::Runtime::ASM::bl(fn_80428F64);
RUNTIME_PPC_JUMP_LABEL(.L_802250EC, 0x802250EC) //this is a jump label
/*802250EC 00221EEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802250F0 00221EF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802250F4 00221EF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802250F8 00221EF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802250FC 00221EFC*/ PPC::Runtime::ASM::blr();
}