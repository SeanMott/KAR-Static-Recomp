//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"



void fn_801217AC(PPC::Runtime::GCContext* context)
{
/*801217AC 0011E5AC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801217B0 0011E5B0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801217B4 0011E5B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801217B8 0011E5B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801217BC 0011E5BC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801217C0 0011E5C0*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801217C4 0011E5C4*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*801217C8 0011E5C8*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x374);
RUNTIME_PPC_JUMP_LABEL(.L_801217CC, 0x801217CC) //this is a jump label
/*801217CC 0011E5CC*/ PPC::Runtime::ASM::addi(context->r0, context->r8, 0x1);
/*801217D0 0011E5D0*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/*801217D4 0011E5D4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801217D8 0011E5D8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*801217DC 0011E5DC*/ PPC::Runtime::ASM::beq(.L_80121880);
/*801217E0 0011E5E0*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*801217E4 0011E5E4*/ PPC::Runtime::ASM::mr(context->r5, context->r6);
/*801217E8 0011E5E8*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*801217EC 0011E5EC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801217F0 0011E5F0*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_801217F4, 0x801217F4) //this is a jump label
/*801217F4 0011E5F4*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*801217F8 0011E5F8*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*801217FC 0011E5FC*/ PPC::Runtime::ASM::beq(.L_80121814);
/*80121800 0011E600*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*80121804 0011E604*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80121808 0011E608*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*8012180C 0011E60C*/ PPC::Runtime::ASM::bne(.L_80121814);
/*80121810 0011E610*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_80121814, 0x80121814) //this is a jump label
/*80121814 0011E614*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80121818 0011E618*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*8012181C 0011E61C*/ PPC::Runtime::ASM::beq(.L_80121834);
/*80121820 0011E620*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*80121824 0011E624*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80121828 0011E628*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*8012182C 0011E62C*/ PPC::Runtime::ASM::bne(.L_80121834);
/*80121830 0011E630*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_80121834, 0x80121834) //this is a jump label
/*80121834 0011E634*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*80121838 0011E638*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*8012183C 0011E63C*/ PPC::Runtime::ASM::beq(.L_80121854);
/*80121840 0011E640*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*80121844 0011E644*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80121848 0011E648*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*8012184C 0011E64C*/ PPC::Runtime::ASM::bne(.L_80121854);
/*80121850 0011E650*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_80121854, 0x80121854) //this is a jump label
/*80121854 0011E654*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r5));
/*80121858 0011E658*/ PPC::Runtime::ASM::cmplwi(context->r7, 0x0);
/*8012185C 0011E65C*/ PPC::Runtime::ASM::beq(.L_80121874);
/*80121860 0011E660*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*80121864 0011E664*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80121868 0011E668*/ PPC::Runtime::ASM::cmplw(context->r31, context->r0);
/*8012186C 0011E66C*/ PPC::Runtime::ASM::bne(.L_80121874);
/*80121870 0011E670*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_80121874, 0x80121874) //this is a jump label
/*80121874 0011E674*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x10);
/*80121878 0011E678*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x3);
/*8012187C 0011E67C*/ PPC::Runtime::ASM::bdnz(.L_801217F4);
RUNTIME_PPC_JUMP_LABEL(.L_80121880, 0x80121880) //this is a jump label
/*80121880 0011E680*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
/*80121884 0011E684*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x80);
/*80121888 0011E688*/ PPC::Runtime::ASM::cmpwi(context->r8, 0x4);
/*8012188C 0011E68C*/ PPC::Runtime::ASM::blt(.L_801217CC);
/*80121890 0011E690*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80121894 0011E694*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80121898 0011E698*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012189C 0011E69C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801218A0 0011E6A0*/ PPC::Runtime::ASM::blr();
}