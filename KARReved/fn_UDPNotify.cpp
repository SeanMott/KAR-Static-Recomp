//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Cancel2.hpp"



void fn_UDPNotify(PPC::Runtime::GCContext* context)
{
/*804707C0 0046D5C0*/ PPC::Runtime::ASM::mflr(context->r0);
/*804707C4 0046D5C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*804707C8 0046D5C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*804707CC 0046D5CC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804707D0 0046D5D0*/ PPC::Runtime::ASM::addi(context->r31, context->r5, 0x0);
/*804707D4 0046D5D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*804707D8 0046D5D8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*804707DC 0046D5DC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804707E0 0046D5E0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804707E4 0046D5E4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804707E8 0046D5E8*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 28, 2);
/*804707EC 0046D5EC*/ PPC::Runtime::ASM::add(context->r29, context->r30, context->r0);
/*804707F0 0046D5F0*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*804707F4 0046D5F4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804707F8 0046D5F8*/ PPC::Runtime::ASM::beq(.L_804708A4);
/*804707FC 0046D5FC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE628 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80470800 0046D600*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80470804 0046D604*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
/*80470808 0046D608*/ PPC::Runtime::ASM::bne(.L_80470814);
/*8047080C 0046D60C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80470810 0046D610*/ PPC::Runtime::ASM::b(.L_80470818);
RUNTIME_PPC_JUMP_LABEL(.L_80470814, 0x80470814) //this is a jump label
/*80470814 0046D614*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80470818, 0x80470818) //this is a jump label
/*80470818 0046D618*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*8047081C 0046D61C*/ PPC::Runtime::ASM::b(.L_8047089C);
RUNTIME_PPC_JUMP_LABEL(.L_80470820, 0x80470820) //this is a jump label
/*80470820 0046D620*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r4));
/*80470824 0046D624*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80470828 0046D628*/ PPC::Runtime::ASM::beq(.L_80470880);
/*8047082C 0046D62C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80470830 0046D630*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80470834 0046D634*/ PPC::Runtime::ASM::bne(.L_80470880);
/*80470838 0046D638*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
/*8047083C 0046D63C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805E6298 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80470840 0046D640*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80470844 0046D644*/ PPC::Runtime::ASM::beq(.L_80470854);
/*80470848 0046D648*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8047084C 0046D64C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80470850 0046D650*/ PPC::Runtime::ASM::bne(.L_80470880);
RUNTIME_PPC_JUMP_LABEL(.L_80470854, 0x80470854) //this is a jump label
/*80470854 0046D654*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x12, context->r4));
/*80470858 0046D658*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r29));
/*8047085C 0046D65C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80470860 0046D660*/ PPC::Runtime::ASM::bne(.L_80470880);
/*80470864 0046D664*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80470868 0046D668*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8047086C 0046D66C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*80470870 0046D670*/ PPC::Runtime::ASM::bne(.L_80470880);
/*80470874 0046D674*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x0);
/*80470878 0046D678*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*8047087C 0046D67C*/ PPC::Runtime::ASM::bl(fn_Cancel2);
RUNTIME_PPC_JUMP_LABEL(.L_80470880, 0x80470880) //this is a jump label
/*80470880 0046D680*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80470884 0046D684*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0x0);
/*80470888 0046D688*/ PPC::Runtime::ASM::bne(.L_80470894);
/*8047088C 0046D68C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80470890 0046D690*/ PPC::Runtime::ASM::b(.L_80470898);
RUNTIME_PPC_JUMP_LABEL(.L_80470894, 0x80470894) //this is a jump label
/*80470894 0046D694*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r28));
RUNTIME_PPC_JUMP_LABEL(.L_80470898, 0x80470898) //this is a jump label
/*80470898 0046D698*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8047089C, 0x8047089C) //this is a jump label
/*8047089C 0046D69C*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*804708A0 0046D6A0*/ PPC::Runtime::ASM::bne(.L_80470820);
RUNTIME_PPC_JUMP_LABEL(.L_804708A4, 0x804708A4) //this is a jump label
/*804708A4 0046D6A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*804708A8 0046D6A8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*804708AC 0046D6AC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*804708B0 0046D6B0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804708B4 0046D6B4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804708B8 0046D6B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*804708BC 0046D6BC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804708C0 0046D6C0*/ PPC::Runtime::ASM::blr();
}