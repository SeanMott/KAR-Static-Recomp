//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B563C.hpp"
#include "fn_802B563C.hpp"
#include "fn_802889EC.hpp"
#include "fn_802B042C.hpp"
#include "fn_8038CB28.hpp"
#include "fn_802B563C.hpp"
#include "fn_802AFFD8.hpp"
#include "fn_802AFFD8.hpp"
#include "fn_802AFFD8.hpp"
#include "fn_802889EC.hpp"



void fn_803A8858(PPC::Runtime::GCContext* context)
{
/*803A8858 003A5658*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*803A885C 003A565C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803A8860 003A5660*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803A8864 003A5664*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*803A8868 003A5668*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*803A886C 003A566C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*803A8870 003A5670*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC344 @ Get_MemoryOffset_HighBit);
/*803A8874 003A5674*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC344 @ Get_MemoryOffset_LowBit);
/*803A8878 003A5678*/ PPC::Runtime::ASM::lis(context->r10, lbl_804BC374 @ Get_MemoryOffset_HighBit);
/*803A887C 003A567C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803A8880 003A5680*/ PPC::Runtime::ASM::li(context->r11, 0x0);
/*803A8884 003A5684*/ PPC::Runtime::ASM::lis(context->r9, lbl_804BC3DC @ Get_MemoryOffset_HighBit);
/*803A8888 003A5688*/ PPC::Runtime::ASM::lis(context->r8, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*803A888C 003A568C*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r29));
/*803A8890 003A5690*/ PPC::Runtime::ASM::lis(context->r7, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*803A8894 003A5694*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803A8898 003A5698*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F7830 @ Get_MemoryOffset_HighBit);
/*803A889C 003A569C*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*803A88A0 003A56A0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F7830 @ Get_MemoryOffset_LowBit);
/*803A88A4 003A56A4*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*803A88A8 003A56A8*/ PPC::Runtime::ASM::mr(context->r27, context->r5);
/*803A88AC 003A56AC*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*803A88B0 003A56B0*/ PPC::Runtime::ASM::addi(context->r10, context->r10, lbl_804BC374 @ Get_MemoryOffset_LowBit);
/*803A88B4 003A56B4*/ PPC::Runtime::ASM::addi(context->r9, context->r9, lbl_804BC3DC @ Get_MemoryOffset_LowBit);
/*803A88B8 003A56B8*/ PPC::Runtime::ASM::addi(context->r8, context->r8, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*803A88BC 003A56BC*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*803A88C0 003A56C0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*803A88C4 003A56C4*/ PPC::Runtime::ASM::addi(context->r28, context->r12, 0x28);
/*803A88C8 003A56C8*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*803A88CC 003A56CC*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*803A88D0 003A56D0*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x3c);
/*803A88D4 003A56D4*/ PPC::Runtime::ASM::li(context->r4, lbl_805DC66C @ Get_MemoryOffset_SDA21);
/*803A88D8 003A56D8*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803A88DC 003A56DC*/ PPC::Runtime::ASM::stw(context->r10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803A88E0 003A56E0*/ PPC::Runtime::ASM::sth(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*803A88E4 003A56E4*/ PPC::Runtime::ASM::sth(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r29));
/*803A88E8 003A56E8*/ PPC::Runtime::ASM::sth(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*803A88EC 003A56EC*/ PPC::Runtime::ASM::sth(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r29));
/*803A88F0 003A56F0*/ PPC::Runtime::ASM::stb(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*803A88F4 003A56F4*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*803A88F8 003A56F8*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803A88FC 003A56FC*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*803A8900 003A5700*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*803A8904 003A5704*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*803A8908 003A5708*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*803A890C 003A570C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803A8910 003A5710*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*803A8914 003A5714*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*803A8918 003A5718*/ PPC::Runtime::ASM::stw(context->r11, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*803A891C 003A571C*/ PPC::Runtime::ASM::bl(fn_802B563C);
/*803A8920 003A5720*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x8c);
/*803A8924 003A5724*/ PPC::Runtime::ASM::li(context->r4, lbl_805DC670 @ Get_MemoryOffset_SDA21);
/*803A8928 003A5728*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803A892C 003A572C*/ PPC::Runtime::ASM::bl(fn_802B563C);
/*803A8930 003A5730*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BC3BC @ Get_MemoryOffset_HighBit);
/*803A8934 003A5734*/ PPC::Runtime::ASM::stw(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A8938 003A5738*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BC3BC @ Get_MemoryOffset_LowBit);
/*803A893C 003A573C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F59EC @ Get_MemoryOffset_HighBit);
/*803A8940 003A5740*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r29));
/*803A8944 003A5744*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804F59EC @ Get_MemoryOffset_LowBit);
/*803A8948 003A5748*/ PPC::Runtime::ASM::li(context->r0, String_ "arrow_" 2 @ Get_MemoryOffset_SDA21);
/*803A894C 003A574C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0, context->r29));
/*803A8950 003A5750*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803A8954 003A5754*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803A8958 003A5758*/ PPC::Runtime::ASM::beq(.L_803A8988);
/*803A895C 003A575C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A8960 003A5760*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A8964 003A5764*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC640 @ Get_MemoryOffset_SDA21);
/*803A8968 003A5768*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC638 @ Get_MemoryOffset_SDA21);
/*803A896C 003A576C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803A8970 003A5770*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803A8974 003A5774*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*803A8978 003A5778*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0xc);
/*803A897C 003A577C*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*803A8980 003A5780*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*803A8984 003A5784*/ PPC::Runtime::ASM::b(.L_803A898C);
RUNTIME_PPC_JUMP_LABEL(.L_803A8988, 0x803A8988) //this is a jump label
/*803A8988 003A5788*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A898C, 0x803A898C) //this is a jump label
/*803A898C 003A578C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe4, context->r29));
/*803A8990 003A5790*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803A8994 003A5794*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5114 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A8998 003A5798*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x30);
/*803A899C 003A579C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe8, context->r29));
/*803A89A0 003A57A0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x2);
/*803A89A4 003A57A4*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xea, context->r29));
/*803A89A8 003A57A8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r29));
/*803A89AC 003A57AC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r29));
/*803A89B0 003A57B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r29));
/*803A89B4 003A57B4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r29));
/*803A89B8 003A57B8*/ PPC::Runtime::ASM::bl(fn_802B042C);
/*803A89BC 003A57BC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803A89C0 003A57C0*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*803A89C4 003A57C4*/ PPC::Runtime::ASM::mr(context->r28, context->r30);
/*803A89C8 003A57C8*/ PPC::Runtime::ASM::b(.L_803A8A3C);
RUNTIME_PPC_JUMP_LABEL(.L_803A89CC, 0x803A89CC) //this is a jump label
/*803A89CC 003A57CC*/ PPC::Runtime::ASM::li(context->r3, 0x50);
/*803A89D0 003A57D0*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 803A89D4 003A57D4  7C 60 1B 79 */ mr. context->r0 , context->r3
/*803A89D8 003A57D8*/ PPC::Runtime::ASM::beq(.L_803A89F0);
/*803A89DC 003A57DC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xdc, context->r29));
/*803A89E0 003A57E0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803A89E4 003A57E4*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r30);
/*803A89E8 003A57E8*/ PPC::Runtime::ASM::bl(fn_802B563C);
/*803A89EC 003A57EC*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803A89F0, 0x803A89F0) //this is a jump label
/*803A89F0 003A57F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803A89F4 003A57F4*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x30);
/*803A89F8 003A57F8*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x18);
/*803A89FC 003A57FC*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803A8A00 003A5800*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*803A8A04 003A5804*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*803A8A08 003A5808*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803A8A0C 003A580C*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*803A8A10 003A5810*/ PPC::Runtime::ASM::bl(fn_802AFFD8);
/*803A8A14 003A5814*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*803A8A18 003A5818*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803A8A1C 003A581C*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r28);
/*803A8A20 003A5820*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803A8A24 003A5824*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803A8A28 003A5828*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A8A2C 003A582C*/ PPC::Runtime::ASM::bctrl();
/*803A8A30 003A5830*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x8);
/*803A8A34 003A5834*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*803A8A38 003A5838*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_803A8A3C, 0x803A8A3C) //this is a jump label
/*803A8A3C 003A583C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r31);
/*803A8A40 003A5840*/ PPC::Runtime::ASM::blt(.L_803A89CC);
/*803A8A44 003A5844*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x8c);
/*803A8A48 003A5848*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x30);
/*803A8A4C 003A584C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803A8A50 003A5850*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x14);
/*803A8A54 003A5854*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803A8A58 003A5858*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*803A8A5C 003A585C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*803A8A60 003A5860*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803A8A64 003A5864*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*803A8A68 003A5868*/ PPC::Runtime::ASM::bl(fn_802AFFD8);
/*803A8A6C 003A586C*/ PPC::Runtime::ASM::addi(context->r0, context->r29, 0x3c);
/*803A8A70 003A5870*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x30);
/*803A8A74 003A5874*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803A8A78 003A5878*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*803A8A7C 003A587C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803A8A80 003A5880*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*803A8A84 003A5884*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r29));
/*803A8A88 003A5888*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*803A8A8C 003A588C*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*803A8A90 003A5890*/ PPC::Runtime::ASM::bl(fn_802AFFD8);
/*803A8A94 003A5894*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x3c);
/*803A8A98 003A5898*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803A8A9C 003A589C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r29));
/*803A8AA0 003A58A0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803A8AA4 003A58A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A8AA8 003A58A8*/ PPC::Runtime::ASM::bctrl();
/*803A8AAC 003A58AC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x8c);
/*803A8AB0 003A58B0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803A8AB4 003A58B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8c, context->r29));
/*803A8AB8 003A58B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803A8ABC 003A58BC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803A8AC0 003A58C0*/ PPC::Runtime::ASM::bctrl();
/*803A8AC4 003A58C4*/ PPC::Runtime::ASM::li(context->r0, lbl_805DC680 @ Get_MemoryOffset_SDA21);
/*803A8AC8 003A58C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803A8ACC 003A58CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803A8AD0 003A58D0*/ PPC::Runtime::ASM::beq(.L_803A8B00);
/*803A8AD4 003A58D4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBB4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803A8AD8 003A58D8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803A8ADC 003A58DC*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC640 @ Get_MemoryOffset_SDA21);
/*803A8AE0 003A58E0*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC638 @ Get_MemoryOffset_SDA21);
/*803A8AE4 003A58E4*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803A8AE8 003A58E8*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803A8AEC 003A58EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x4);
/*803A8AF0 003A58F0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803A8AF4 003A58F4*/ PPC::Runtime::ASM::bl(fn_802889EC);
/*803A8AF8 003A58F8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x4);
/*803A8AFC 003A58FC*/ PPC::Runtime::ASM::b(.L_803A8B04);
RUNTIME_PPC_JUMP_LABEL(.L_803A8B00, 0x803A8B00) //this is a jump label
/*803A8B00 003A5900*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803A8B04, 0x803A8B04) //this is a jump label
/*803A8B04 003A5904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*803A8B08 003A5908*/ PPC::Runtime::ASM::li(context->r0, 0x1a0);
/*803A8B0C 003A590C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803A8B10 003A5910*/ PPC::Runtime::ASM::li(context->r4, 0xd0);
/*803A8B14 003A5914*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*803A8B18 003A5918*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803A8B1C 003A591C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803A8B20 003A5920*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*803A8B24 003A5924*/ PPC::Runtime::ASM::sth(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1e, context->r29));
/*803A8B28 003A5928*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*803A8B2C 003A592C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xfc, context->r29));
/*803A8B30 003A5930*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10e, context->r29));
/*803A8B34 003A5934*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*803A8B38 003A5938*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*803A8B3C 003A593C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*803A8B40 003A5940*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803A8B44 003A5944*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*803A8B48 003A5948*/ PPC::Runtime::ASM::blr();
}