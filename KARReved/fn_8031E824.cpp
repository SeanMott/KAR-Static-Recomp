//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8031E824(PPC::Runtime::GCContext* context)
{
/*8031E824 0031B624*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8031E828 0031B628*/ PPC::Runtime::ASM::mflr(context->r0);
/*8031E82C 0031B62C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8031E830 0031B630*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8031E834 0031B634*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8031E838 0031B638*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8031E83C 0031B63C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8031E840 0031B640*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8031E844 0031B644*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8031E848 0031B648*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
/*8031E84C 0031B64C*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*8031E850 0031B650*/ PPC::Runtime::ASM::ble(.L_8031E85C);
/*8031E854 0031B654*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*8031E858 0031B658*/ PPC::Runtime::ASM::b(.L_8031E868);
RUNTIME_PPC_JUMP_LABEL(.L_8031E85C, 0x8031E85C) //this is a jump label
/*8031E85C 0031B65C*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*8031E860 0031B660*/ PPC::Runtime::ASM::bge(.L_8031E868);
/*8031E864 0031B664*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8031E868, 0x8031E868) //this is a jump label
/*8031E868 0031B668*/ PPC::Runtime::ASM::lis(context->r3, lbl_804E0E44 @ Get_MemoryOffset_HighBit);
/*8031E86C 0031B66C*/ PPC::Runtime::ASM::lwzu(context->r5, lbl_804E0E44 @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8031E870 0031B670*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8031E874 0031B674*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8031E878 0031B678*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8031E87C 0031B67C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8031E880 0031B680*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8031E884 0031B684*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*8031E888 0031B688*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E88C 0031B68C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8031E890 0031B690*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8031E894 0031B694*/ PPC::Runtime::ASM::add(context->r29, context->r28, context->r0);
/*8031E898 0031B698*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8031E89C 0031B69C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8031E8A0 0031B6A0*/ PPC::Runtime::ASM::b(.L_8031E8B8);
RUNTIME_PPC_JUMP_LABEL(.L_8031E8A4, 0x8031E8A4) //this is a jump label
/*8031E8A4 0031B6A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8031E8A8 0031B6A8*/ PPC::Runtime::ASM::addi(context->r12, context->r1, 0x8);
/*8031E8AC 0031B6AC*/ PPC::Runtime::ASM::bl(fn_803AD738);
/*8031E8B0 0031B6B0*/ PPC::Runtime::ASM::nop();
/*8031E8B4 0031B6B4*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
RUNTIME_PPC_JUMP_LABEL(.L_8031E8B8, 0x8031E8B8) //this is a jump label
/*8031E8B8 0031B6B8*/ PPC::Runtime::ASM::cmplw(context->r28, context->r29);
/*8031E8BC 0031B6BC*/ PPC::Runtime::ASM::bne(.L_8031E8A4);
/*8031E8C0 0031B6C0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8031E8C4 0031B6C4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8031E8C8 0031B6C8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8031E8CC 0031B6CC*/ PPC::Runtime::ASM::mr(context->r5, context->r4);
/*8031E8D0 0031B6D0*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8031E8D4 0031B6D4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8031E8D8 0031B6D8*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r30));
/*8031E8DC 0031B6DC*/ PPC::Runtime::ASM::b(.L_8031E8F4);
RUNTIME_PPC_JUMP_LABEL(.L_8031E8E0, 0x8031E8E0) //this is a jump label
/*8031E8E0 0031B6E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E8E4 0031B6E4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8031E8E8 0031B6E8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r5);
/*8031E8EC 0031B6EC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x4);
/*8031E8F0 0031B6F0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8031E8F4, 0x8031E8F4) //this is a jump label
/*8031E8F4 0031B6F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*8031E8F8 0031B6F8*/ PPC::Runtime::ASM::cmplw(context->r6, context->r0);
/*8031E8FC 0031B6FC*/ PPC::Runtime::ASM::blt(.L_8031E8E0);
/*8031E900 0031B700*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8031E904 0031B704*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8031E908 0031B708*/ PPC::Runtime::ASM::ble(.L_8031E9E8);
/*8031E90C 0031B70C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x8);
/*8031E910 0031B710*/ PPC::Runtime::ASM::subi(context->r5, context->r31, 0x8);
/*8031E914 0031B714*/ PPC::Runtime::ASM::ble(.L_8031E9BC);
/*8031E918 0031B718*/ PPC::Runtime::ASM::addi(context->r0, context->r5, 0x7);
/*8031E91C 0031B71C*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*8031E920 0031B720*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*8031E924 0031B724*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8031E928 0031B728*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8031E92C 0031B72C*/ PPC::Runtime::ASM::ble(.L_8031E9BC);
RUNTIME_PPC_JUMP_LABEL(.L_8031E930, 0x8031E930) //this is a jump label
/*8031E930 0031B730*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E934 0031B734*/ PPC::Runtime::ASM::li(context->r12, 0x1);
/*8031E938 0031B738*/ PPC::Runtime::ASM::addi(context->r10, context->r3, 0x4);
/*8031E93C 0031B73C*/ PPC::Runtime::ASM::addi(context->r9, context->r3, 0x8);
/*8031E940 0031B740*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r3);
/*8031E944 0031B744*/ PPC::Runtime::ASM::addi(context->r8, context->r3, 0xc);
/*8031E948 0031B748*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x10);
/*8031E94C 0031B74C*/ PPC::Runtime::ASM::addi(context->r6, context->r3, 0x14);
/*8031E950 0031B750*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r5));
/*8031E954 0031B754*/ PPC::Runtime::ASM::addi(context->r5, context->r3, 0x18);
/*8031E958 0031B758*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1c);
/*8031E95C 0031B75C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x20);
/*8031E960 0031B760*/ PPC::Runtime::ASM::lwz(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E964 0031B764*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x8);
/*8031E968 0031B768*/ PPC::Runtime::ASM::lwzx(context->r10, context->r11, context->r10);
/*8031E96C 0031B76C*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r10));
/*8031E970 0031B770*/ PPC::Runtime::ASM::lwz(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E974 0031B774*/ PPC::Runtime::ASM::lwzx(context->r9, context->r10, context->r9);
/*8031E978 0031B778*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r9));
/*8031E97C 0031B77C*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E980 0031B780*/ PPC::Runtime::ASM::lwzx(context->r8, context->r9, context->r8);
/*8031E984 0031B784*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r8));
/*8031E988 0031B788*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E98C 0031B78C*/ PPC::Runtime::ASM::lwzx(context->r7, context->r8, context->r7);
/*8031E990 0031B790*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r7));
/*8031E994 0031B794*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E998 0031B798*/ PPC::Runtime::ASM::lwzx(context->r6, context->r7, context->r6);
/*8031E99C 0031B79C*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r6));
/*8031E9A0 0031B7A0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E9A4 0031B7A4*/ PPC::Runtime::ASM::lwzx(context->r5, context->r6, context->r5);
/*8031E9A8 0031B7A8*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r5));
/*8031E9AC 0031B7AC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E9B0 0031B7B0*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*8031E9B4 0031B7B4*/ PPC::Runtime::ASM::stb(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r5));
/*8031E9B8 0031B7B8*/ PPC::Runtime::ASM::bdnz(.L_8031E930);
RUNTIME_PPC_JUMP_LABEL(.L_8031E9BC, 0x8031E9BC) //this is a jump label
/*8031E9BC 0031B7BC*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r31);
/*8031E9C0 0031B7C0*/ PPC::Runtime::ASM::slwi(context->r6, context->r4, 2);
/*8031E9C4 0031B7C4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8031E9C8 0031B7C8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8031E9CC 0031B7CC*/ PPC::Runtime::ASM::cmplw(context->r4, context->r31);
/*8031E9D0 0031B7D0*/ PPC::Runtime::ASM::bge(.L_8031E9E8);
RUNTIME_PPC_JUMP_LABEL(.L_8031E9D4, 0x8031E9D4) //this is a jump label
/*8031E9D4 0031B7D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r30));
/*8031E9D8 0031B7D8*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r6);
/*8031E9DC 0031B7DC*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x4);
/*8031E9E0 0031B7E0*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x70, context->r3));
/*8031E9E4 0031B7E4*/ PPC::Runtime::ASM::bdnz(.L_8031E9D4);
RUNTIME_PPC_JUMP_LABEL(.L_8031E9E8, 0x8031E9E8) //this is a jump label
/*8031E9E8 0031B7E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8031E9EC 0031B7EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8031E9F0 0031B7F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8031E9F4 0031B7F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8031E9F8 0031B7F8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8031E9FC 0031B7FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8031EA00 0031B800*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8031EA04 0031B804*/ PPC::Runtime::ASM::blr();
}