//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801E5014.hpp"
#include "fn_801C9074.hpp"
#include "fn_801CBAC8.hpp"
#include "fn_801CBA00.hpp"
#include "fn_801C98C4.hpp"



void fn_801C6668(PPC::Runtime::GCContext* context)
{
/*801C6668 001C3468*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C666C 001C346C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C6670 001C3470*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C6674 001C3474*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C6678 001C3478*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C667C 001C347C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbe4, context->r31));
/*801C6680 001C3480*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801C6684 001C3484*/ PPC::Runtime::ASM::beq(.L_801C6694);
/*801C6688 001C3488*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C668C 001C348C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801C6690 001C3490*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801C6694, 0x801C6694) //this is a jump label
/*801C6694 001C3494*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C6698 001C3498*/ PPC::Runtime::ASM::bl(fn_801E5014);
/*801C669C 001C349C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C66A0 001C34A0*/ PPC::Runtime::ASM::bl(fn_801C9074);
/*801C66A4 001C34A4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C66A8 001C34A8*/ PPC::Runtime::ASM::bl(fn_801CBAC8);
/*801C66AC 001C34AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C66B0 001C34B0*/ PPC::Runtime::ASM::bl(fn_801CBA00);
/*801C66B4 001C34B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C66B8 001C34B8*/ PPC::Runtime::ASM::bl(fn_801C98C4);
/*801C66BC 001C34BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C66C0 001C34C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C66C4 001C34C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C66C8 001C34C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C66CC 001C34CC*/ PPC::Runtime::ASM::blr();
}