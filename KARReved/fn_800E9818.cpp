//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_800E9818(PPC::Runtime::GCContext* context)
{
/*800E9818 000E6618*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800E981C 000E661C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800E9820 000E6620*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E9824 000E6624*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800E9828 000E6628*/ PPC::Runtime::ASM::bl(_savegpr_27);
/* 800E982C 000E662C  7C BE 2B 79 */ mr. context->r30 , context->r5
/*800E9830 000E6630*/ PPC::Runtime::ASM::lis(context->r5, MemoryOffset_960 @ Get_MemoryOffset_HighBit);
/*800E9834 000E6634*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*800E9838 000E6638*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*800E983C 000E663C*/ PPC::Runtime::ASM::addi(context->r31, context->r5, MemoryOffset_960 @ Get_MemoryOffset_LowBit);
/*800E9840 000E6640*/ PPC::Runtime::ASM::bne(.L_800E9854);
/*800E9844 000E6644*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xb0);
/*800E9848 000E6648*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x10c);
/*800E984C 000E664C*/ PPC::Runtime::ASM::li(context->r4, 0x19c);
/*800E9850 000E6650*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E9854, 0x800E9854) //this is a jump label
/*800E9854 000E6654*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E9858 000E6658*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E985C 000E665C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800E9860 000E6660*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*800E9864 000E6664*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E9868 000E6668*/ PPC::Runtime::ASM::bne(.L_800E987C);
/*800E986C 000E666C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E9870 000E6670*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0xe0);
/*800E9874 000E6674*/ PPC::Runtime::ASM::li(context->r4, 0x129);
/*800E9878 000E6678*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E987C, 0x800E987C) //this is a jump label
/*800E987C 000E667C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1grGlobalP @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800E9880 000E6680*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800E9884 000E6684*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800E9888 000E6688*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800E988C 000E668C*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*800E9890 000E6690*/ PPC::Runtime::ASM::bne(.L_800E98A4);
/*800E9894 000E6694*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E9898 000E6698*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x38);
/*800E989C 000E669C*/ PPC::Runtime::ASM::li(context->r4, 0x113);
/*800E98A0 000E66A0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E98A4, 0x800E98A4) //this is a jump label
/*800E98A4 000E66A4*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*800E98A8 000E66A8*/ PPC::Runtime::ASM::xor(context->r0, context->r29, context->r0);
/*800E98AC 000E66AC*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800E98B0 000E66B0*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r29);
/*800E98B4 000E66B4*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/* 800E98B8 000E66B8  54 00 0F FF */ srwi. context->r0 , context->r0 , 31
/*800E98BC 000E66BC*/ PPC::Runtime::ASM::beq(.L_800E98EC);
/*800E98C0 000E66C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800E98C4 000E66C4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*800E98C8 000E66C8*/ PPC::Runtime::ASM::beq(.L_800E98D4);
/*800E98CC 000E66CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E98D0 000E66D0*/ PPC::Runtime::ASM::b(.L_800E98D8);
RUNTIME_PPC_JUMP_LABEL(.L_800E98D4, 0x800E98D4) //this is a jump label
/*800E98D4 000E66D4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800E98D8, 0x800E98D8) //this is a jump label
/*800E98D8 000E66D8*/ PPC::Runtime::ASM::xor(context->r0, context->r4, context->r29);
/*800E98DC 000E66DC*/ PPC::Runtime::ASM::srawi(context->r3, context->r0, 1);
/*800E98E0 000E66E0*/ PPC::Runtime::ASM::and(context->r0, context->r0, context->r4);
/*800E98E4 000E66E4*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*800E98E8 000E66E8*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_800E98EC, 0x800E98EC) //this is a jump label
/*800E98EC 000E66EC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*800E98F0 000E66F0*/ PPC::Runtime::ASM::bne(.L_800E9914);
/*800E98F4 000E66F4*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*800E98F8 000E66F8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x48);
/*800E98FC 000E66FC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800E9900 000E6700*/ PPC::Runtime::ASM::bl(OSReport);
/*800E9904 000E6704*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*800E9908 000E6708*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x58);
/*800E990C 000E670C*/ PPC::Runtime::ASM::li(context->r4, 0x114);
/*800E9910 000E6710*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800E9914, 0x800E9914) //this is a jump label
/*800E9914 000E6714*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800E9918 000E6718*/ PPC::Runtime::ASM::slwi(context->r0, context->r29, 2);
/*800E991C 000E671C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r27));
/*800E9920 000E6720*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800E9924 000E6724*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800E9928 000E6728*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*800E992C 000E672C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800E9930 000E6730*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*800E9934 000E6734*/ PPC::Runtime::ASM::lwzx(context->r3, context->r4, context->r0);
/*800E9938 000E6738*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*800E993C 000E673C*/ PPC::Runtime::ASM::subf(context->r3, context->r30, context->r0);
/*800E9940 000E6740*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*800E9944 000E6744*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*800E9948 000E6748*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800E994C 000E674C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800E9950 000E6750*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800E9954 000E6754*/ PPC::Runtime::ASM::blr();
}