//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800DC9A0.hpp"
#include "fn_800992C4.hpp"



void fn_800A367C(PPC::Runtime::GCContext* context)
{
/*800A367C 000A047C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*800A3680 000A0480*/ PPC::Runtime::ASM::mflr(context->r0);
/*800A3684 000A0484*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800A3688 000A0488*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800A368C 000A048C*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800A3690 000A0490*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*800A3694 000A0494*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800A3698 000A0498*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x54);
/*800A369C 000A049C*/ PPC::Runtime::ASM::bl(fn_800DC9A0);
/*800A36A0 000A04A0*/ PPC::Runtime::ASM::mr(context->r7, context->r31);
/*800A36A4 000A04A4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x2c);
/*800A36A8 000A04A8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*800A36AC 000A04AC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x44);
/*800A36B0 000A04B0*/ PPC::Runtime::ASM::li(context->r6, lbl_805D5B68 @ Get_MemoryOffset_SDA21);
/*800A36B4 000A04B4*/ PPC::Runtime::ASM::bl(fn_800992C4);
/*800A36B8 000A04B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*800A36BC 000A04BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r1));
/*800A36C0 000A04C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800A36C4 000A04C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*800A36C8 000A04C8*/ PPC::Runtime::ASM::blr();
}