//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803A0008(PPC::Runtime::GCContext* context)
{
/*803A0008 0039CE08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803A000C 0039CE0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A0010 0039CE10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803A0014 0039CE14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A0018 0039CE18*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A001C 0039CE1C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A0020 0039CE20*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803A0024 0039CE24*/ PPC::Runtime::ASM::lhz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*803A0028 0039CE28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r3));
/*803A002C 0039CE2C*/ PPC::Runtime::ASM::srwi(context->r4, context->r7, 31);
/*803A0030 0039CE30*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*803A0034 0039CE34*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r7);
/*803A0038 0039CE38*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A003C 0039CE3C*/ PPC::Runtime::ASM::srawi(context->r4, context->r4, 1);
/*803A0040 0039CE40*/ PPC::Runtime::ASM::add(context->r31, context->r5, context->r0);
/*803A0044 0039CE44*/ PPC::Runtime::ASM::add(context->r30, context->r6, context->r4);
/*803A0048 0039CE48*/ PPC::Runtime::ASM::beq(.L_803A0060);
/*803A004C 0039CE4C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A0050 0039CE50*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*803A0054 0039CE54*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A0058 0039CE58*/ PPC::Runtime::ASM::bctrl();
/*803A005C 0039CE5C*/ PPC::Runtime::ASM::b(.L_803A0064);
RUNTIME_PPC_JUMP_LABEL(.L_803A0060, 0x803A0060) //this is a jump label
/*803A0060 0039CE60*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A0064, 0x803A0064) //this is a jump label
/*803A0064 0039CE64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r29));
/*803A0068 0039CE68*/ PPC::Runtime::ASM::add(context->r0, context->r31, context->r3);
/*803A006C 0039CE6C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*803A0070 0039CE70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r29));
/*803A0074 0039CE74*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803A0078 0039CE78*/ PPC::Runtime::ASM::beq(.L_803A0090);
/*803A007C 0039CE7C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A0080 0039CE80*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*803A0084 0039CE84*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A0088 0039CE88*/ PPC::Runtime::ASM::bctrl();
/*803A008C 0039CE8C*/ PPC::Runtime::ASM::b(.L_803A0094);
RUNTIME_PPC_JUMP_LABEL(.L_803A0090, 0x803A0090) //this is a jump label
/*803A0090 0039CE90*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A0094, 0x803A0094) //this is a jump label
/*803A0094 0039CE94*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r29));
/*803A0098 0039CE98*/ PPC::Runtime::ASM::add(context->r0, context->r30, context->r3);
/*803A009C 0039CE9C*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0xd4);
/*803A00A0 0039CEA0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r4));
/*803A00A4 0039CEA4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r29));
/*803A00A8 0039CEA8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*803A00AC 0039CEAC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A00B0 0039CEB0*/ PPC::Runtime::ASM::bctrl();
/*803A00B4 0039CEB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803A00B8 0039CEB8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803A00BC 0039CEBC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A00C0 0039CEC0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A00C4 0039CEC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A00C8 0039CEC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803A00CC 0039CECC*/ PPC::Runtime::ASM::blr();
}