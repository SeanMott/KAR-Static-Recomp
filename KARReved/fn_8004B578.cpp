//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_plGetPlayerKind.hpp"
#include "fn_8000979C.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_80009534.hpp"
#include "fn_802307E4.hpp"



void fn_8004B578(PPC::Runtime::GCContext* context)
{
/*8004B578 00048378*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004B57C 0004837C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004B580 00048380*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004B584 00048384*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004B588 00048388*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B58C, 0x8004B58C) //this is a jump label
/*8004B58C 0004838C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004B590 00048390*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004B594 00048394*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004B598 00048398*/ PPC::Runtime::ASM::bne(.L_8004B5B4);
/*8004B59C 0004839C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004B5A0 000483A0*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004B5A4 000483A4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004B5A8 000483A8*/ PPC::Runtime::ASM::beq(.L_8004B5B4);
/*8004B5AC 000483AC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004B5B0 000483B0*/ PPC::Runtime::ASM::b(.L_8004B5C4);
RUNTIME_PPC_JUMP_LABEL(.L_8004B5B4, 0x8004B5B4) //this is a jump label
/*8004B5B4 000483B4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004B5B8 000483B8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004B5BC 000483BC*/ PPC::Runtime::ASM::blt(.L_8004B58C);
/*8004B5C0 000483C0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B5C4, 0x8004B5C4) //this is a jump label
/*8004B5C4 000483C4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004B5C8 000483C8*/ PPC::Runtime::ASM::beq(.L_8004B614);
/*8004B5CC 000483CC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B5D0, 0x8004B5D0) //this is a jump label
/*8004B5D0 000483D0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004B5D4 000483D4*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004B5D8 000483D8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004B5DC 000483DC*/ PPC::Runtime::ASM::bne(.L_8004B608);
/*8004B5E0 000483E0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004B5E4 000483E4*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8004B5E8 000483E8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004B5EC 000483EC*/ PPC::Runtime::ASM::bne(.L_8004B608);
/*8004B5F0 000483F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004B5F4 000483F4*/ PPC::Runtime::ASM::bl(fn_802307E4);
/*8004B5F8 000483F8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*8004B5FC 000483FC*/ PPC::Runtime::ASM::blt(.L_8004B608);
/*8004B600 00048400*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004B604 00048404*/ PPC::Runtime::ASM::b(.L_8004B618);
RUNTIME_PPC_JUMP_LABEL(.L_8004B608, 0x8004B608) //this is a jump label
/*8004B608 00048408*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004B60C 0004840C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004B610 00048410*/ PPC::Runtime::ASM::blt(.L_8004B5D0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B614, 0x8004B614) //this is a jump label
/*8004B614 00048414*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004B618, 0x8004B618) //this is a jump label
/*8004B618 00048418*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004B61C 0004841C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004B620 00048420*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004B624 00048424*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004B628 00048428*/ PPC::Runtime::ASM::blr();
}