//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801E1D64(PPC::Runtime::GCContext* context)
{
/*801E1D64 001DEB64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E1D68 001DEB68*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E1D6C 001DEB6C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6F98 @ Get_MemoryOffset_SDA21);
/*801E1D70 001DEB70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E1D74 001DEB74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E1D78 001DEB78*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801E1D7C 001DEB7C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E1D80 001DEB80*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801E1D84 001DEB84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801E1D88 001DEB88*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801E1D8C 001DEB8C*/ PPC::Runtime::ASM::lwzx(context->r4, context->r5, context->r0);
/*801E1D90 001DEB90*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r4));
/*801E1D94 001DEB94*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801E1D98 001DEB98*/ PPC::Runtime::ASM::beq(.L_801E1DA4);
/*801E1D9C 001DEB9C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801E1DA0 001DEBA0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801E1DA4, 0x801E1DA4) //this is a jump label
/*801E1DA4 001DEBA4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b48, context->r30));
/*801E1DA8 001DEBA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E1DAC 001DEBAC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E1DB0 001DEBB0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E1DB4 001DEBB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E1DB8 001DEBB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E1DBC 001DEBBC*/ PPC::Runtime::ASM::blr();
}