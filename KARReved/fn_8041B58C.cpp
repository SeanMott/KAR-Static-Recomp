//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memcpy.hpp"
#include "memset.hpp"



void fn_8041B58C(PPC::Runtime::GCContext* context)
{
/*8041B58C 0041838C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8041B590 00418390*/ PPC::Runtime::ASM::mflr(context->r0);
/* 8041B594 00418394  7C 67 1B 79 */ mr. context->r7 , context->r3
/*8041B598 00418398*/ PPC::Runtime::ASM::mr(context->r6, context->r4);
/*8041B59C 0041839C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041B5A0 004183A0*/ PPC::Runtime::ASM::beq(.L_8041B5F8);
/*8041B5A4 004183A4*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*8041B5A8 004183A8*/ PPC::Runtime::ASM::beq(.L_8041B5D8);
/*8041B5AC 004183AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8041B5B0 004183B0*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x10);
/*8041B5B4 004183B4*/ PPC::Runtime::ASM::addi(context->r4, context->r6, 0x8);
/*8041B5B8 004183B8*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*8041B5BC 004183BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8041B5C0 004183C0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r6));
/*8041B5C4 004183C4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r7));
/*8041B5C8 004183C8*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8041B5CC 004183CC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*8041B5D0 004183D0*/ PPC::Runtime::ASM::bl(memcpy);
/*8041B5D4 004183D4*/ PPC::Runtime::ASM::b(.L_8041B5F8);
RUNTIME_PPC_JUMP_LABEL(.L_8041B5D8, 0x8041B5D8) //this is a jump label
/*8041B5D8 004183D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8041B5DC 004183DC*/ PPC::Runtime::ASM::addi(context->r3, context->r7, 0x10);
/*8041B5E0 004183E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8041B5E4 004183E4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8041B5E8 004183E8*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*8041B5EC 004183EC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r7));
/*8041B5F0 004183F0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*8041B5F4 004183F4*/ PPC::Runtime::ASM::bl(memset);
RUNTIME_PPC_JUMP_LABEL(.L_8041B5F8, 0x8041B5F8) //this is a jump label
/*8041B5F8 004183F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8041B5FC 004183FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8041B600 00418400*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8041B604 00418404*/ PPC::Runtime::ASM::blr();
}