//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DF844.hpp"
#include "fn_8030AA6C.hpp"
#include "fn_802E8C54.hpp"
#include "fn_802E8C54.hpp"
#include "fn_8030AA6C.hpp"
#include "fn_80379424.hpp"
#include "fn_802D4184.hpp"
#include "fn_8028E058.hpp"
#include "fn_802D4184.hpp"
#include "fn_8028E058.hpp"
#include "fn_80379784.hpp"
#include "fn_80379784.hpp"
#include "fn_80381D6C.hpp"
#include "fn_80377C10.hpp"



void fn_8030A75C(PPC::Runtime::GCContext* context)
{
/*8030A75C 0030755C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8030A760 00307560*/ PPC::Runtime::ASM::mflr(context->r0);
/*8030A764 00307564*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8030A768 00307568*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8030A76C 0030756C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8030A770 00307570*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8030A774 00307574*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030A778 00307578*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8030A77C 0030757C*/ PPC::Runtime::ASM::bl(fn_802DF844);
/*8030A780 00307580*/ PPC::Runtime::ASM::lis(context->r3, lbl_804DC914 @ Get_MemoryOffset_HighBit);
/*8030A784 00307584*/ PPC::Runtime::ASM::lis(context->r4, fn_8030AA6C @ Get_MemoryOffset_HighBit);
/*8030A788 00307588*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804DC914 @ Get_MemoryOffset_LowBit);
/*8030A78C 0030758C*/ PPC::Runtime::ASM::li(context->r6, 0x4c);
/*8030A790 00307590*/ PPC::Runtime::ASM::lis(context->r3, fn_802E8C54 @ Get_MemoryOffset_HighBit);
/*8030A794 00307594*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8030A798 00307598*/ PPC::Runtime::ASM::addi(context->r5, context->r3, fn_802E8C54 @ Get_MemoryOffset_LowBit);
/*8030A79C 0030759C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8030AA6C @ Get_MemoryOffset_LowBit);
/*8030A7A0 003075A0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*8030A7A4 003075A4*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*8030A7A8 003075A8*/ PPC::Runtime::ASM::bl(fn___construct_array);
/*8030A7AC 003075AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8030A7B0 003075B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030A7B4 003075B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*8030A7B8 003075B8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A7BC 003075BC*/ PPC::Runtime::ASM::bctrl();
/*8030A7C0 003075C0*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8030A7C4 003075C4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xa0);
/*8030A7C8 003075C8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8030A7CC 003075CC*/ PPC::Runtime::ASM::bl(fn_80379424);
/*8030A7D0 003075D0*/ PPC::Runtime::ASM::lis(context->r3, fn_802D4184 @ Get_MemoryOffset_HighBit);
/*8030A7D4 003075D4*/ PPC::Runtime::ASM::lis(context->r5, fn_8028E058 @ Get_MemoryOffset_HighBit);
/*8030A7D8 003075D8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, fn_802D4184 @ Get_MemoryOffset_LowBit);
/*8030A7DC 003075DC*/ PPC::Runtime::ASM::li(context->r6, 0x4c);
/*8030A7E0 003075E0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xdc);
/*8030A7E4 003075E4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, fn_8028E058 @ Get_MemoryOffset_LowBit);
/*8030A7E8 003075E8*/ PPC::Runtime::ASM::li(context->r7, 0x2);
/*8030A7EC 003075EC*/ PPC::Runtime::ASM::bl(fn___construct_array);
/*8030A7F0 003075F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8030A7F4 003075F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030A7F8 003075F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*8030A7FC 003075FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A800 00307600*/ PPC::Runtime::ASM::bctrl();
/*8030A804 00307604*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD658 @ Get_MemoryOffset_HighBit);
/*8030A808 00307608*/ PPC::Runtime::ASM::addi(context->r29, context->r31, 0x174);
/*8030A80C 0030760C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD658 @ Get_MemoryOffset_LowBit);
/*8030A810 00307610*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8030A814 00307614*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r31));
/*8030A818 00307618*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8030A81C 0030761C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8030A820 00307620*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x178, context->r31));
/*8030A824 00307624*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x17c, context->r31));
/*8030A828 00307628*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8030A82C 0030762C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8030A830 00307630*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A834 00307634*/ PPC::Runtime::ASM::bctrl();
/*8030A838 00307638*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD6A0 @ Get_MemoryOffset_HighBit);
/*8030A83C 0030763C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F54B8 @ Get_MemoryOffset_HighBit);
/*8030A840 00307640*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD6A0 @ Get_MemoryOffset_LowBit);
/*8030A844 00307644*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8030A848 00307648*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8030A84C 0030764C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F54B8 @ Get_MemoryOffset_LowBit);
/*8030A850 00307650*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3CB8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8030A854 00307654*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8030A858 00307658*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8030A85C 0030765C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r29));
/*8030A860 00307660*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8030A864 00307664*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8030A868 00307668*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8030A86C 0030766C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8030A870 00307670*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A874 00307674*/ PPC::Runtime::ASM::bctrl();
/*8030A878 00307678*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8030A87C 0030767C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a0, context->r31));
/*8030A880 00307680*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a1, context->r31));
/*8030A884 00307684*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a2, context->r31));
/*8030A888 00307688*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a3, context->r31));
/*8030A88C 0030768C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A890 00307690*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030A894 00307694*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030A898 00307698*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*8030A89C 0030769C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A8A0 003076A0*/ PPC::Runtime::ASM::bctrl();
/*8030A8A4 003076A4*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*8030A8A8 003076A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A8AC 003076AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030A8B0 003076B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030A8B4 003076B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r12));
/*8030A8B8 003076B8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A8BC 003076BC*/ PPC::Runtime::ASM::bctrl();
/*8030A8C0 003076C0*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c, context->r31));
/*8030A8C4 003076C4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8030A8C8 003076C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A8CC 003076CC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x46c, context->r3));
/*8030A8D0 003076D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x518, context->r3));
/*8030A8D4 003076D4*/ PPC::Runtime::ASM::addi(context->r29, context->r5, 0x44);
/*8030A8D8 003076D8*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/* 8030A8DC 003076DC  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8030A8E0 003076E0*/ PPC::Runtime::ASM::bne(.L_8030A8F4);
/*8030A8E4 003076E4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9B80 @ Get_MemoryOffset_SDA21);
/*8030A8E8 003076E8*/ PPC::Runtime::ASM::li(context->r4, 0x495);
/*8030A8EC 003076EC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9B88 @ Get_MemoryOffset_SDA21);
/*8030A8F0 003076F0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8030A8F4, 0x8030A8F4) //this is a jump label
/*8030A8F4 003076F4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8030A8F8 003076F8*/ PPC::Runtime::ASM::bne(.L_8030A90C);
/*8030A8FC 003076FC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9B80 @ Get_MemoryOffset_SDA21);
/*8030A900 00307700*/ PPC::Runtime::ASM::li(context->r4, 0x496);
/*8030A904 00307704*/ PPC::Runtime::ASM::li(context->r5, String_ "mt" 6 @ Get_MemoryOffset_SDA21);
/*8030A908 00307708*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8030A90C, 0x8030A90C) //this is a jump label
/*8030A90C 0030770C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8030A910 00307710*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x44);
/*8030A914 00307714*/ PPC::Runtime::ASM::bl(fn_PSMTXCopy);
/*8030A918 00307718*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8030A91C 0030771C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8030A920 00307720*/ PPC::Runtime::ASM::oris(context->r0, context->r0, 0x380);
/*8030A924 00307724*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8030A928 00307728*/ PPC::Runtime::ASM::beq(.L_8030A96C);
/*8030A92C 0030772C*/ PPC::Runtime::ASM::bne(.L_8030A940);
/*8030A930 00307730*/ PPC::Runtime::ASM::li(context->r3, lbl_805D9B80 @ Get_MemoryOffset_SDA21);
/*8030A934 00307734*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8030A938 00307738*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9B88 @ Get_MemoryOffset_SDA21);
/*8030A93C 0030773C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8030A940, 0x8030A940) //this is a jump label
/*8030A940 00307740*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8030A944 00307744*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8030A948 00307748*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8030A94C 0030774C*/ PPC::Runtime::ASM::bne(.L_8030A95C);
/*8030A950 00307750*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8030A954 00307754*/ PPC::Runtime::ASM::beq(.L_8030A95C);
/*8030A958 00307758*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8030A95C, 0x8030A95C) //this is a jump label
/* 8030A95C 0030775C  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8030A960 00307760*/ PPC::Runtime::ASM::bne(.L_8030A96C);
/*8030A964 00307764*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8030A968 00307768*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8030A96C, 0x8030A96C) //this is a jump label
/*8030A96C 0030776C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A970 00307770*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8030A974 00307774*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8030A978 00307778*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x518, context->r3));
/*8030A97C 0030777C*/ PPC::Runtime::ASM::bl(fn_8038D158);
/*8030A980 00307780*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A984 00307784*/ PPC::Runtime::ASM::lis(context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_HighBit);
/*8030A988 00307788*/ PPC::Runtime::ASM::addi(context->r6, context->r3, fn_HSD_AObjSetCurrentFrame @ Get_MemoryOffset_LowBit);
/*8030A98C 0030778C*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3CC0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8030A990 00307790*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x518, context->r4));
/*8030A994 00307794*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8030A998 00307798*/ PPC::Runtime::ASM::subi(context->r5, context->r3, 0x1);
/*8030A99C 0030779C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8030A9A0 003077A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8030A9A4 003077A4*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/* 8030A9A8 003077A8  4C C6 32 42 */ crset context->cr1eq
/*8030A9AC 003077AC*/ PPC::Runtime::ASM::bl(fn_803FCDB8);
/*8030A9B0 003077B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A9B4 003077B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x518, context->r3));
/*8030A9B8 003077B8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8030A9BC 003077BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8030A9C0 003077C0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030A9C4 003077C4*/ PPC::Runtime::ASM::bctrl();
/*8030A9C8 003077C8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A9CC 003077CC*/ PPC::Runtime::ASM::lis(context->r3, 0x7);
/*8030A9D0 003077D0*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0xd);
/*8030A9D4 003077D4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8030A9D8 003077D8*/ PPC::Runtime::ASM::addi(context->r3, context->r6, 0x390);
/*8030A9DC 003077DC*/ PPC::Runtime::ASM::bl(fn_80379784);
/*8030A9E0 003077E0*/ PPC::Runtime::ASM::lis(context->r4, 0x7);
/*8030A9E4 003077E4*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0xa0);
/*8030A9E8 003077E8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xe);
/*8030A9EC 003077EC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8030A9F0 003077F0*/ PPC::Runtime::ASM::bl(fn_80379784);
/*8030A9F4 003077F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030A9F8 003077F8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8030A9FC 003077FC*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8030AA00 00307800*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xbb4);
/*8030AA04 00307804*/ PPC::Runtime::ASM::bl(fn_80381D6C);
/*8030AA08 00307808*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8030AA0C 0030780C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8030AA10 00307810*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9BAC @ Get_MemoryOffset_SDA21);
/*8030AA14 00307814*/ PPC::Runtime::ASM::li(context->r6, lbl_805D9BA4 @ Get_MemoryOffset_SDA21);
/*8030AA18 00307818*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8030AA1C 0030781C*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8030AA20 00307820*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8030AA24 00307824*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8030AA28 00307828*/ PPC::Runtime::ASM::li(context->r5, lbl_805D9BDC @ Get_MemoryOffset_SDA21);
/*8030AA2C 0030782C*/ PPC::Runtime::ASM::bl(fn_80377C10);
/*8030AA30 00307830*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x174);
/*8030AA34 00307834*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8030AA38 00307838*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x174, context->r31));
/*8030AA3C 0030783C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8030AA40 00307840*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*8030AA44 00307844*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8030AA48 00307848*/ PPC::Runtime::ASM::bctrl();
/*8030AA4C 0030784C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8030AA50 00307850*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8030AA54 00307854*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8030AA58 00307858*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8030AA5C 0030785C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8030AA60 00307860*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8030AA64 00307864*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8030AA68 00307868*/ PPC::Runtime::ASM::blr();
}