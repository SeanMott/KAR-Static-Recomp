//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005D864(PPC::Runtime::GCContext* context)
{
/*8005D864 0005A664*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8005D868 0005A668*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005D86C 0005A66C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8005D870 0005A670*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8005D874 0005A674*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*8005D878 0005A678*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005D87C 0005A67C*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8005D880 0005A680*/ PPC::Runtime::ASM::addi(context->r3, context->r5, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005D884 0005A684*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*8005D888 0005A688*/ PPC::Runtime::ASM::addi(context->r28, context->r3, 0x33c);
/*8005D88C 0005A68C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8005D890 0005A690*/ PPC::Runtime::ASM::mr(context->r30, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_8005D894, 0x8005D894) //this is a jump label
/*8005D894 0005A694*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8005D898 0005A698*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8005D89C 0005A69C*/ PPC::Runtime::ASM::bne(.L_8005D930);
/*8005D8A0 0005A6A0*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8005D8A4 0005A6A4*/ PPC::Runtime::ASM::li(context->r31, 0x1);
/*8005D8A8 0005A6A8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8005D8AC 0005A6AC*/ PPC::Runtime::ASM::beq(.L_8005D8E4);
/*8005D8B0 0005A6B0*/ PPC::Runtime::ASM::bl(fn_80443D8C);
/*8005D8B4 0005A6B4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8005D8B8 0005A6B8*/ PPC::Runtime::ASM::bne(.L_8005D8E0);
/*8005D8BC 0005A6BC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005D8C0 0005A6C0*/ PPC::Runtime::ASM::lha(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8005D8C4 0005A6C4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005D8C8 0005A6C8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8005D8CC 0005A6CC*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8005D8D0 0005A6D0*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8005D8D4 0005A6D4*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fb, context->r3));
/*8005D8D8 0005A6D8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*8005D8DC 0005A6DC*/ PPC::Runtime::ASM::b(.L_8005D8E4);
RUNTIME_PPC_JUMP_LABEL(.L_8005D8E0, 0x8005D8E0) //this is a jump label
/*8005D8E0 0005A6E0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8005D8E4, 0x8005D8E4) //this is a jump label
/*8005D8E4 0005A6E4*/ PPC::Runtime::ASM::lha(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*8005D8E8 0005A6E8*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8005D8EC 0005A6EC*/ PPC::Runtime::ASM::beq(.L_8005D924);
/*8005D8F0 0005A6F0*/ PPC::Runtime::ASM::bl(fn_80443D8C);
/*8005D8F4 0005A6F4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8005D8F8 0005A6F8*/ PPC::Runtime::ASM::bne(.L_8005D920);
/*8005D8FC 0005A6FC*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005D900 0005A700*/ PPC::Runtime::ASM::lha(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*8005D904 0005A704*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005D908 0005A708*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8005D90C 0005A70C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8005D910 0005A710*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8005D914 0005A714*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fb, context->r3));
/*8005D918 0005A718*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r30));
/*8005D91C 0005A71C*/ PPC::Runtime::ASM::b(.L_8005D924);
RUNTIME_PPC_JUMP_LABEL(.L_8005D920, 0x8005D920) //this is a jump label
/*8005D920 0005A720*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8005D924, 0x8005D924) //this is a jump label
/*8005D924 0005A724*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*8005D928 0005A728*/ PPC::Runtime::ASM::beq(.L_8005D930);
/*8005D92C 0005A72C*/ PPC::Runtime::ASM::b(.L_8005DA0C);
RUNTIME_PPC_JUMP_LABEL(.L_8005D930, 0x8005D930) //this is a jump label
/*8005D930 0005A730*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8005D934 0005A734*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0xb8);
/*8005D938 0005A738*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x200);
/*8005D93C 0005A73C*/ PPC::Runtime::ASM::blt(.L_8005D894);
/*8005D940 0005A740*/ PPC::Runtime::ASM::li(context->r0, 0x40);
/*8005D944 0005A744*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*8005D948 0005A748*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8005D94C, 0x8005D94C) //this is a jump label
/*8005D94C 0005A74C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8005D950 0005A750*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005D954 0005A754*/ PPC::Runtime::ASM::bne(.L_8005D95C);
/*8005D958 0005A758*/ PPC::Runtime::ASM::b(.L_8005DA0C);
RUNTIME_PPC_JUMP_LABEL(.L_8005D95C, 0x8005D95C) //this is a jump label
/*8005D95C 0005A75C*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r28));
/*8005D960 0005A760*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8005D964 0005A764*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005D968 0005A768*/ PPC::Runtime::ASM::bne(.L_8005D970);
/*8005D96C 0005A76C*/ PPC::Runtime::ASM::b(.L_8005DA0C);
RUNTIME_PPC_JUMP_LABEL(.L_8005D970, 0x8005D970) //this is a jump label
/*8005D970 0005A770*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r28));
/*8005D974 0005A774*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8005D978 0005A778*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005D97C 0005A77C*/ PPC::Runtime::ASM::bne(.L_8005D984);
/*8005D980 0005A780*/ PPC::Runtime::ASM::b(.L_8005DA0C);
RUNTIME_PPC_JUMP_LABEL(.L_8005D984, 0x8005D984) //this is a jump label
/*8005D984 0005A784*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r28));
/*8005D988 0005A788*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8005D98C 0005A78C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005D990 0005A790*/ PPC::Runtime::ASM::bne(.L_8005D998);
/*8005D994 0005A794*/ PPC::Runtime::ASM::b(.L_8005DA0C);
RUNTIME_PPC_JUMP_LABEL(.L_8005D998, 0x8005D998) //this is a jump label
/*8005D998 0005A798*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r28));
/*8005D99C 0005A79C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8005D9A0 0005A7A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005D9A4 0005A7A4*/ PPC::Runtime::ASM::bne(.L_8005D9AC);
/*8005D9A8 0005A7A8*/ PPC::Runtime::ASM::b(.L_8005DA0C);
RUNTIME_PPC_JUMP_LABEL(.L_8005D9AC, 0x8005D9AC) //this is a jump label
/*8005D9AC 0005A7AC*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r28));
/*8005D9B0 0005A7B0*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8005D9B4 0005A7B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005D9B8 0005A7B8*/ PPC::Runtime::ASM::bne(.L_8005D9C0);
/*8005D9BC 0005A7BC*/ PPC::Runtime::ASM::b(.L_8005DA0C);
RUNTIME_PPC_JUMP_LABEL(.L_8005D9C0, 0x8005D9C0) //this is a jump label
/*8005D9C0 0005A7C0*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r28));
/*8005D9C4 0005A7C4*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8005D9C8 0005A7C8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005D9CC 0005A7CC*/ PPC::Runtime::ASM::bne(.L_8005D9D4);
/*8005D9D0 0005A7D0*/ PPC::Runtime::ASM::b(.L_8005DA0C);
RUNTIME_PPC_JUMP_LABEL(.L_8005D9D4, 0x8005D9D4) //this is a jump label
/*8005D9D4 0005A7D4*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r28));
/*8005D9D8 0005A7D8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8005D9DC 0005A7DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005D9E0 0005A7E0*/ PPC::Runtime::ASM::bne(.L_8005D9E8);
/*8005D9E4 0005A7E4*/ PPC::Runtime::ASM::b(.L_8005DA0C);
RUNTIME_PPC_JUMP_LABEL(.L_8005D9E8, 0x8005D9E8) //this is a jump label
/*8005D9E8 0005A7E8*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8005D9EC 0005A7EC*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0xb8);
/*8005D9F0 0005A7F0*/ PPC::Runtime::ASM::bdnz(.L_8005D94C);
/*8005D9F4 0005A7F4*/ PPC::Runtime::ASM::lis(context->r3, String_ "warning_audio_virtual_group_is_ful" Get_MemoryOffset_HighBit);
/*8005D9F8 0005A7F8*/ PPC::Runtime::ASM::li(context->r4, 0x200);
/*8005D9FC 0005A7FC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "warning_audio_virtual_group_is_ful" Get_MemoryOffset_LowBit);
/*8005DA00 0005A800*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8005DA04 0005A804*/ PPC::Runtime::ASM::bl(OSReport);
/*8005DA08 0005A808*/ PPC::Runtime::ASM::li(context->r29, -0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8005DA0C, 0x8005DA0C) //this is a jump label
/*8005DA0C 0005A80C*/ PPC::Runtime::ASM::cmpwi(context->r29, -0x1);
/*8005DA10 0005A810*/ PPC::Runtime::ASM::beq(.L_8005DB04);
/*8005DA14 0005A814*/ PPC::Runtime::ASM::mulli(context->r4, context->r29, 0xb8);
/*8005DA18 0005A818*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005DA1C 0005A81C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8005DA20 0005A820*/ PPC::Runtime::ASM::addi(context->r0, context->r3, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005DA24 0005A824*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8005DA28 0005A828*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8005DA2C 0005A82C*/ PPC::Runtime::ASM::addi(context->r7, context->r3, 0x33c);
/*8005DA30 0005A830*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*8005DA34 0005A834*/ PPC::Runtime::ASM::stw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c, context->r3));
/*8005DA38 0005A838*/ PPC::Runtime::ASM::li(context->r0, 0x7f);
/*8005DA3C 0005A83C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8005DA40 0005A840*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8005DA44 0005A844*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8005DA48 0005A848*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r7));
/*8005DA4C 0005A84C*/ PPC::Runtime::ASM::sth(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x42, context->r7));
/*8005DA50 0005A850*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r7));
/*8005DA54 0005A854*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46, context->r7));
/*8005DA58 0005A858*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r7));
/*8005DA5C 0005A85C*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a, context->r7));
/*8005DA60 0005A860*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r7));
/*8005DA64 0005A864*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4e, context->r7));
/*8005DA68 0005A868*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r7));
/*8005DA6C 0005A86C*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52, context->r7));
/*8005DA70 0005A870*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DA74 0005A874*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 7, 24, 24);
/*8005DA78 0005A878*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DA7C 0005A87C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DA80 0005A880*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 6, 25, 25);
/*8005DA84 0005A884*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DA88 0005A888*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DA8C 0005A88C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 5, 26, 26);
/*8005DA90 0005A890*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DA94 0005A894*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DA98 0005A898*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 4, 27, 27);
/*8005DA9C 0005A89C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DAA0 0005A8A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r7));
/*8005DAA4 0005A8A4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 4, 25, 27);
/*8005DAA8 0005A8A8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r7));
/*8005DAAC 0005A8AC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r7));
/*8005DAB0 0005A8B0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 3, 28, 28);
/*8005DAB4 0005A8B4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r7));
/*8005DAB8 0005A8B8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DABC 0005A8BC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 3, 28, 28);
/*8005DAC0 0005A8C0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DAC4 0005A8C4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DAC8 0005A8C8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 29, 29);
/*8005DACC 0005A8CC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DAD0 0005A8D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DAD4 0005A8D4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 1, 30, 30);
/*8005DAD8 0005A8D8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DADC 0005A8DC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DAE0 0005A8E0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*8005DAE4 0005A8E4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*8005DAE8 0005A8E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r7));
/*8005DAEC 0005A8EC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*8005DAF0 0005A8F0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x55, context->r7));
/*8005DAF4 0005A8F4*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r7));
/*8005DAF8 0005A8F8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r7));
/*8005DAFC 0005A8FC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78, context->r7));
/*8005DB00 0005A900*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x88, context->r7));
RUNTIME_PPC_JUMP_LABEL(.L_8005DB04, 0x8005DB04) //this is a jump label
/*8005DB04 0005A904*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8005DB08 0005A908*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8005DB0C 0005A90C*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*8005DB10 0005A910*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8005DB14 0005A914*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005DB18 0005A918*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8005DB1C 0005A91C*/ PPC::Runtime::ASM::blr();
}