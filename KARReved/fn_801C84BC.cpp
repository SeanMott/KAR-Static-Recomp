//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801C84BC(PPC::Runtime::GCContext* context)
{
/*801C84BC 001C52BC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C84C0 001C52C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C84C4 001C52C4*/ PPC::Runtime::ASM::li(context->r4, lbl_805D6F98 @ Get_MemoryOffset_SDA21);
/*801C84C8 001C52C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C84CC 001C52CC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801C84D0 001C52D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801C84D4 001C52D4*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801C84D8 001C52D8*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r0);
/*801C84DC 001C52DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r4));
/*801C84E0 001C52E0*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801C84E4 001C52E4*/ PPC::Runtime::ASM::beq(.L_801C84F4);
/*801C84E8 001C52E8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801C84EC 001C52EC*/ PPC::Runtime::ASM::bctrl();
/*801C84F0 001C52F0*/ PPC::Runtime::ASM::b(.L_801C84F8);
RUNTIME_PPC_JUMP_LABEL(.L_801C84F4, 0x801C84F4) //this is a jump label
/*801C84F4 001C52F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E19E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_801C84F8, 0x801C84F8) //this is a jump label
/*801C84F8 001C52F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C84FC 001C52FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C8500 001C5300*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C8504 001C5304*/ PPC::Runtime::ASM::blr();
}