//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800550BC.hpp"
#include "fn_800550BC.hpp"



void fn_80200DF4(PPC::Runtime::GCContext* context)
{
/*80200DF4 001FDBF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80200DF8 001FDBF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*80200DFC 001FDBFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80200E00 001FDC00*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*80200E04 001FDC04*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*80200E08 001FDC08*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*80200E0C 001FDC0C*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*80200E10 001FDC10*/ PPC::Runtime::ASM::beq(.L_80200E48);
/*80200E14 001FDC14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*80200E18 001FDC18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80200E1C 001FDC1C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80200E20 001FDC20*/ PPC::Runtime::ASM::beq(.L_80200E38);
/*80200E24 001FDC24*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80200E28 001FDC28*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*80200E2C 001FDC2C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x1);
/*80200E30 001FDC30*/ PPC::Runtime::ASM::bl(fn_800550BC);
/*80200E34 001FDC34*/ PPC::Runtime::ASM::b(.L_80200E48);
RUNTIME_PPC_JUMP_LABEL(.L_80200E38, 0x80200E38) //this is a jump label
/*80200E38 001FDC38*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80200E3C 001FDC3C*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*80200E40 001FDC40*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x481);
/*80200E44 001FDC44*/ PPC::Runtime::ASM::bl(fn_800550BC);
RUNTIME_PPC_JUMP_LABEL(.L_80200E48, 0x80200E48) //this is a jump label
/*80200E48 001FDC48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80200E4C 001FDC4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80200E50 001FDC50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80200E54 001FDC54*/ PPC::Runtime::ASM::blr();
}