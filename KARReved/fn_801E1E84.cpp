//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801E1E84(PPC::Runtime::GCContext* context)
{
/*801E1E84 001DEC84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E1E88 001DEC88*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E1E8C 001DEC8C*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6F98 @ Get_MemoryOffset_SDA21);
/*801E1E90 001DEC90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E1E94 001DEC94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801E1E98 001DEC98*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801E1E9C 001DEC9C*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*801E1EA0 001DECA0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r4));
/*801E1EA4 001DECA4*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801E1EA8 001DECA8*/ PPC::Runtime::ASM::beq(.L_801E1EB4);
/*801E1EAC 001DECAC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801E1EB0 001DECB0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801E1EB4, 0x801E1EB4) //this is a jump label
/*801E1EB4 001DECB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E1EB8 001DECB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E1EBC 001DECBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E1EC0 001DECC0*/ PPC::Runtime::ASM::blr();
}