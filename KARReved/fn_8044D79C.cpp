//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn_803EEC28.hpp"
#include "fn___cvt_fp2unsigned.hpp"
#include "fn_803EE7F4.hpp"
#include "fn_803EEFC8.hpp"
#include "fn_803EEED0.hpp"
#include "fn_803EEE7C.hpp"
#include "fn_803EEE28.hpp"
#include "fn_803EEB68.hpp"
#include "fn_803EE8B8.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_8044B1F4.hpp"
#include "fn_8044B2C0.hpp"
#include "fn_8044B060.hpp"
#include "fn_804471D8.hpp"
#include "fn_80446FEC.hpp"
#include "fn_8044CE08.hpp"
#include "fn_8044CE08.hpp"
#include "fn_804472B8.hpp"



void fn_8044D79C(PPC::Runtime::GCContext* context)
{
/*8044D79C 0044A59C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*8044D7A0 0044A5A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8044D7A4 0044A5A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8044D7A8 0044A5A8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8044D7AC 0044A5AC*/ PPC::Runtime::ASM::bl(_savegpr_21);
/*8044D7B0 0044A5B0*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 26);
/*8044D7B4 0044A5B4*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_180596DA0 @ Get_MemoryOffset_HighBit);
/*8044D7B8 0044A5B8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x98);
/*8044D7BC 0044A5BC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8044D7C0 0044A5C0*/ PPC::Runtime::ASM::addi(context->r30, context->r3, STRUCT_BYTE4_COUNT_180596DA0 @ Get_MemoryOffset_LowBit);
/*8044D7C4 0044A5C4*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x8c0);
/*8044D7C8 0044A5C8*/ PPC::Runtime::ASM::add(context->r29, context->r29, context->r0);
/*8044D7CC 0044A5CC*/ PPC::Runtime::ASM::ble(.L_8044D7E0);
/*8044D7D0 0044A5D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8044D7D4 0044A5D4*/ PPC::Runtime::ASM::cmpw(context->r0, context->r4);
/*8044D7D8 0044A5D8*/ PPC::Runtime::ASM::bne(.L_8044D7E0);
/*8044D7DC 0044A5DC*/ PPC::Runtime::ASM::b(.L_8044D7E4);
RUNTIME_PPC_JUMP_LABEL(.L_8044D7E0, 0x8044D7E0) //this is a jump label
/*8044D7E0 0044A5E0*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8044D7E4, 0x8044D7E4) //this is a jump label
/*8044D7E4 0044A5E4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*8044D7E8 0044A5E8*/ PPC::Runtime::ASM::beq(.L_8044DB8C);
/*8044D7EC 0044A5EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
/*8044D7F0 0044A5F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8044D7F4 0044A5F4*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 30, 30);
/*8044D7F8 0044A5F8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8044D7FC 0044A5FC*/ PPC::Runtime::ASM::bne(.L_8044D85C);
/*8044D800 0044A600*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r29));
/*8044D804 0044A604*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x3f);
/*8044D808 0044A608*/ PPC::Runtime::ASM::bge(.L_8044D81C);
/*8044D80C 0044A60C*/ PPC::Runtime::ASM::lfs(context->f1, StructValues_Float_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044D810 0044A610*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x33c0, context->r30));
/*8044D814 0044A614*/ PPC::Runtime::ASM::fmuls(context->f4, context->f1, context->f0);
/*8044D818 0044A618*/ PPC::Runtime::ASM::b(.L_8044D820);
RUNTIME_PPC_JUMP_LABEL(.L_8044D81C, 0x8044D81C) //this is a jump label
/*8044D81C 0044A61C*/ PPC::Runtime::ASM::lfs(context->f4, StructValues_Float_3 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8044D820, 0x8044D820) //this is a jump label
/*8044D820 0044A620*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*8044D824 0044A624*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x33d8);
/*8044D828 0044A628*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*8044D82C 0044A62C*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r29));
/*8044D830 0044A630*/ PPC::Runtime::ASM::lfsx(context->f0, context->r3, context->r0);
/*8044D834 0044A634*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E61B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044D838 0044A638*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f4);
/*8044D83C 0044A63C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8044D840 0044A640*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*8044D844 0044A644*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f0);
/*8044D848 0044A648*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f0);
/*8044D84C 0044A64C*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8044D850 0044A650*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8044D854 0044A654*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8044D858 0044A658*/ PPC::Runtime::ASM::b(.L_8044D864);
RUNTIME_PPC_JUMP_LABEL(.L_8044D85C, 0x8044D85C) //this is a jump label
/*8044D85C 0044A65C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8044D860 0044A660*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8044D864, 0x8044D864) //this is a jump label
/*8044D864 0044A664*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8044D868 0044A668*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8044D86C 0044A66C*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8044D870 0044A670*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*8044D874 0044A674*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8044D878 0044A678*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*8044D87C 0044A67C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x10);
/*8044D880 0044A680*/ PPC::Runtime::ASM::b(.L_8044D890);
RUNTIME_PPC_JUMP_LABEL(.L_8044D884, 0x8044D884) //this is a jump label
/*8044D884 0044A684*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8044D888 0044A688*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x424);
/*8044D88C 0044A68C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8044D890, 0x8044D890) //this is a jump label
/*8044D890 0044A690*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8044D894 0044A694*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8044D898 0044A698*/ PPC::Runtime::ASM::bne(.L_8044D884);
/*8044D89C 0044A69C*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8044D8A0 0044A6A0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8050932C @ Get_MemoryOffset_HighBit);
/*8044D8A4 0044A6A4*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 2);
/*8044D8A8 0044A6A8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x424);
/*8044D8AC 0044A6AC*/ PPC::Runtime::ASM::li(context->r5, -0x2);
/*8044D8B0 0044A6B0*/ PPC::Runtime::ASM::slwi(context->r24, context->r6, 6);
/*8044D8B4 0044A6B4*/ PPC::Runtime::ASM::stwx(context->r5, context->r4, context->r0);
/*8044D8B8 0044A6B8*/ PPC::Runtime::ASM::addi(context->r25, context->r30, 0x480);
/*8044D8BC 0044A6BC*/ PPC::Runtime::ASM::add(context->r25, context->r25, context->r24);
/*8044D8C0 0044A6C0*/ PPC::Runtime::ASM::slwi(context->r27, context->r6, 16);
/*8044D8C4 0044A6C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8044D8C8 0044A6C8*/ PPC::Runtime::ASM::addi(context->r26, context->r25, 0x4);
/*8044D8CC 0044A6CC*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8050932C @ Get_MemoryOffset_LowBit);
/*8044D8D0 0044A6D0*/ PPC::Runtime::ASM::li(context->r22, 0x0);
/*8044D8D4 0044A6D4*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*8044D8D8 0044A6D8*/ PPC::Runtime::ASM::b(.L_8044DAB0);
RUNTIME_PPC_JUMP_LABEL(.L_8044D8DC, 0x8044D8DC) //this is a jump label
/*8044D8DC 0044A6DC*/ PPC::Runtime::ASM::cmpwi(context->r22, 0x1);
/*8044D8E0 0044A6E0*/ PPC::Runtime::ASM::bne(.L_8044D978);
/*8044D8E4 0044A6E4*/ PPC::Runtime::ASM::mulli(context->r4, context->r4, 0x98);
/*8044D8E8 0044A6E8*/ PPC::Runtime::ASM::addi(context->r21, context->r30, 0x8c0);
/*8044D8EC 0044A6EC*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8044D8F0 0044A6F0*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8044D8F4 0044A6F4*/ PPC::Runtime::ASM::add(context->r21, context->r21, context->r4);
/*8044D8F8 0044A6F8*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4a, context->r21));
/*8044D8FC 0044A6FC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r21));
/*8044D900 0044A700*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r21));
/*8044D904 0044A704*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x2);
/*8044D908 0044A708*/ PPC::Runtime::ASM::beq(.L_8044D920);
/*8044D90C 0044A70C*/ PPC::Runtime::ASM::lis(context->r4, lbl_80509398 @ Get_MemoryOffset_HighBit);
/*8044D910 0044A710*/ PPC::Runtime::ASM::li(context->r3, String_ "synth." Get_MemoryOffset_SDA21);
/*8044D914 0044A714*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_80509398 @ Get_MemoryOffset_LowBit);
/*8044D918 0044A718*/ PPC::Runtime::ASM::li(context->r4, 0x845);
/*8044D91C 0044A71C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8044D920, 0x8044D920) //this is a jump label
/*8044D920 0044A720*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE50C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044D924 0044A724*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*8044D928 0044A728*/ PPC::Runtime::ASM::b(.L_8044D938);
RUNTIME_PPC_JUMP_LABEL(.L_8044D92C, 0x8044D92C) //this is a jump label
/*8044D92C 0044A72C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r21);
/*8044D930 0044A730*/ PPC::Runtime::ASM::beq(.L_8044D948);
/*8044D934 0044A734*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8044D938, 0x8044D938) //this is a jump label
/*8044D938 0044A738*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8044D93C 0044A73C*/ PPC::Runtime::ASM::bne(.L_8044D92C);
/*8044D940 0044A740*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r21));
/*8044D944 0044A744*/ PPC::Runtime::ASM::stw(context->r21, STRUCT_BYTE4_COUNT_1805DE50C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8044D948, 0x8044D948) //this is a jump label
/*8044D948 0044A748*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
/*8044D94C 0044A74C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*8044D950 0044A750*/ PPC::Runtime::ASM::beq(.L_8044D960);
/*8044D954 0044A754*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E6168 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044D958 0044A758*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r21));
/*8044D95C 0044A75C*/ PPC::Runtime::ASM::b(.L_8044D978);
RUNTIME_PPC_JUMP_LABEL(.L_8044D960, 0x8044D960) //this is a jump label
/*8044D960 0044A760*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8044D964 0044A764*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*8044D968 0044A768*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*8044D96C 0044A76C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8044D970 0044A770*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*8044D974 0044A774*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r21));
RUNTIME_PPC_JUMP_LABEL(.L_8044D978, 0x8044D978) //this is a jump label
/*8044D978 0044A778*/ PPC::Runtime::ASM::cmpwi(context->r22, 0x0);
/*8044D97C 0044A77C*/ PPC::Runtime::ASM::bne(.L_8044D988);
/*8044D980 0044A780*/ PPC::Runtime::ASM::mr(context->r0, context->r29);
/*8044D984 0044A784*/ PPC::Runtime::ASM::b(.L_8044D98C);
RUNTIME_PPC_JUMP_LABEL(.L_8044D988, 0x8044D988) //this is a jump label
/*8044D988 0044A788*/ PPC::Runtime::ASM::mr(context->r0, context->r21);
RUNTIME_PPC_JUMP_LABEL(.L_8044D98C, 0x8044D98C) //this is a jump label
/*8044D98C 0044A78C*/ PPC::Runtime::ASM::mr(context->r28, context->r0);
/*8044D990 0044A790*/ PPC::Runtime::ASM::li(context->r23, 0x0);
/*8044D994 0044A794*/ PPC::Runtime::ASM::b(.L_8044DAA0);
RUNTIME_PPC_JUMP_LABEL(.L_8044D998, 0x8044D998) //this is a jump label
/*8044D998 0044A798*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8044D99C 0044A79C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8044D9A0 0044A7A0*/ PPC::Runtime::ASM::bl(fn_803EEC28);
/*8044D9A4 0044A7A4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
/*8044D9A8 0044A7A8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 29, 29);
/*8044D9AC 0044A7AC*/ PPC::Runtime::ASM::beq(.L_8044D9C0);
/*8044D9B0 0044A7B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8050932C @ Get_MemoryOffset_HighBit);
/*8044D9B4 0044A7B4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8044D9B8 0044A7B8*/ PPC::Runtime::ASM::stw(context->r0, lbl_8050932C @ Get_MemoryOffset_LowBit ( context->r3 ));
/*8044D9BC 0044A7BC*/ PPC::Runtime::ASM::b(.L_8044D9E8);
RUNTIME_PPC_JUMP_LABEL(.L_8044D9C0, 0x8044D9C0) //this is a jump label
/*8044D9C0 0044A7C0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*8044D9C4 0044A7C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r29));
/*8044D9C8 0044A7C8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r29));
/*8044D9CC 0044A7CC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*8044D9D0 0044A7D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E61B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044D9D4 0044A7D4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f2, context->f0);
/*8044D9D8 0044A7D8*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*8044D9DC 0044A7DC*/ PPC::Runtime::ASM::bl(fn___cvt_fp2unsigned);
/*8044D9E0 0044A7E0*/ PPC::Runtime::ASM::lis(context->r4, lbl_8050932C @ Get_MemoryOffset_HighBit);
/*8044D9E4 0044A7E4*/ PPC::Runtime::ASM::stw(context->r3, lbl_8050932C @ Get_MemoryOffset_LowBit ( context->r4 ));
RUNTIME_PPC_JUMP_LABEL(.L_8044D9E8, 0x8044D9E8) //this is a jump label
/*8044D9E8 0044A7E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8044D9EC 0044A7EC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8044D9F0 0044A7F0*/ PPC::Runtime::ASM::bl(fn_803EE7F4);
/*8044D9F4 0044A7F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8044D9F8 0044A7F8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8044D9FC 0044A7FC*/ PPC::Runtime::ASM::bl(fn_803EEFC8);
/*8044DA00 0044A800*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8044DA04 0044A804*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE534 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044DA08 0044A808*/ PPC::Runtime::ASM::mullw(context->r4, context->r23, context->r0);
/*8044DA0C 0044A80C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8044DA10 0044A810*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r27);
/*8044DA14 0044A814*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*8044DA18 0044A818*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x2);
/*8044DA1C 0044A81C*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*8044DA20 0044A820*/ PPC::Runtime::ASM::bl(fn_803EEED0);
/*8044DA24 0044A824*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8044DA28 0044A828*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DE534 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044DA2C 0044A82C*/ PPC::Runtime::ASM::mullw(context->r0, context->r23, context->r0);
/*8044DA30 0044A830*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8044DA34 0044A834*/ PPC::Runtime::ASM::add(context->r4, context->r3, context->r27);
/*8044DA38 0044A838*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8044DA3C 0044A83C*/ PPC::Runtime::ASM::slwi(context->r5, context->r4, 1);
/*8044DA40 0044A840*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r6);
/*8044DA44 0044A844*/ PPC::Runtime::ASM::add(context->r4, context->r5, context->r4);
/*8044DA48 0044A848*/ PPC::Runtime::ASM::bl(fn_803EEE7C);
/*8044DA4C 0044A84C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8044DA50 0044A850*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DE534 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044DA54 0044A854*/ PPC::Runtime::ASM::mullw(context->r4, context->r23, context->r0);
/*8044DA58 0044A858*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8044DA5C 0044A85C*/ PPC::Runtime::ASM::add(context->r0, context->r5, context->r27);
/*8044DA60 0044A860*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 1);
/*8044DA64 0044A864*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x2);
/*8044DA68 0044A868*/ PPC::Runtime::ASM::add(context->r4, context->r0, context->r4);
/*8044DA6C 0044A86C*/ PPC::Runtime::ASM::bl(fn_803EEE28);
/*8044DA70 0044A870*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE538 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044DA74 0044A874*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8044DA78 0044A878*/ PPC::Runtime::ASM::bne(.L_8044DA84);
/*8044DA7C 0044A87C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8044DA80 0044A880*/ PPC::Runtime::ASM::bl(fn_803EEB68);
RUNTIME_PPC_JUMP_LABEL(.L_8044DA84, 0x8044DA84) //this is a jump label
/*8044DA84 0044A884*/ PPC::Runtime::ASM::cmpwi(context->r22, 0x0);
/*8044DA88 0044A888*/ PPC::Runtime::ASM::bne(.L_8044DA98);
/*8044DA8C 0044A88C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*8044DA90 0044A890*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8044DA94 0044A894*/ PPC::Runtime::ASM::bl(fn_803EE8B8);
RUNTIME_PPC_JUMP_LABEL(.L_8044DA98, 0x8044DA98) //this is a jump label
/*8044DA98 0044A898*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x4);
/*8044DA9C 0044A89C*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8044DAA0, 0x8044DAA0) //this is a jump label
/*8044DAA0 0044A8A0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r29));
/*8044DAA4 0044A8A4*/ PPC::Runtime::ASM::cmpw(context->r23, context->r0);
/*8044DAA8 0044A8A8*/ PPC::Runtime::ASM::blt(.L_8044D998);
/*8044DAAC 0044A8AC*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8044DAB0, 0x8044DAB0) //this is a jump label
/*8044DAB0 0044A8B0*/ PPC::Runtime::ASM::lha(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r29));
/*8044DAB4 0044A8B4*/ PPC::Runtime::ASM::subfic(context->r3, context->r4, -0x1);
/*8044DAB8 0044A8B8*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8044DABC 0044A8BC*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*8044DAC0 0044A8C0*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
/*8044DAC4 0044A8C4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8044DAC8 0044A8C8*/ PPC::Runtime::ASM::cmpw(context->r22, context->r0);
/*8044DACC 0044A8CC*/ PPC::Runtime::ASM::blt(.L_8044D8DC);
/*8044DAD0 0044A8D0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
/*8044DAD4 0044A8D4*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r0, 0, 29, 27);
/*8044DAD8 0044A8D8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
/*8044DADC 0044A8DC*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8044DAE0 0044A8E0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r29));
/*8044DAE4 0044A8E4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8044DAE8 0044A8E8*/ PPC::Runtime::ASM::bne(.L_8044DB0C);
/*8044DAEC 0044A8EC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r29));
/*8044DAF0 0044A8F0*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 28, 28);
/*8044DAF4 0044A8F4*/ PPC::Runtime::ASM::bne(.L_8044DB0C);
/*8044DAF8 0044A8F8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8044DAFC 0044A8FC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e, context->r29));
/*8044DB00 0044A900*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE504 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044DB04 0044A904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r29));
/*8044DB08 0044A908*/ PPC::Runtime::ASM::stw(context->r29, STRUCT_BYTE4_COUNT_1805DE504 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8044DB0C, 0x8044DB0C) //this is a jump label
/*8044DB0C 0044A90C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8044DB10 0044A910*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8044DB14 0044A914*/ PPC::Runtime::ASM::bl(fn_8044B1F4);
/*8044DB18 0044A918*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8044DB1C 0044A91C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8044DB20 0044A920*/ PPC::Runtime::ASM::bl(fn_8044B2C0);
/*8044DB24 0044A924*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8044DB28 0044A928*/ PPC::Runtime::ASM::bl(fn_8044B060);
/*8044DB2C 0044A92C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8044DB30 0044A930*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8044DB34 0044A934*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8044DB38 0044A938*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8044DB3C 0044A93C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8044DB40 0044A940*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8044DB44 0044A944*/ PPC::Runtime::ASM::bl(fn_804471D8);
/*8044DB48 0044A948*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x480);
/*8044DB4C 0044A94C*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r24);
/*8044DB50 0044A950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8044DB54 0044A954*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8044DB58 0044A958*/ PPC::Runtime::ASM::bne(.L_8044DB78);
/*8044DB5C 0044A95C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8044DB60 0044A960*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8044DB64 0044A964*/ PPC::Runtime::ASM::bl(fn_80446FEC);
/*8044DB68 0044A968*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8044DB6C 0044A96C*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8044DB70 0044A970*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8044DB74 0044A974*/ PPC::Runtime::ASM::b(.L_8044DB8C);
RUNTIME_PPC_JUMP_LABEL(.L_8044DB78, 0x8044DB78) //this is a jump label
/*8044DB78 0044A978*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*8044DB7C 0044A97C*/ PPC::Runtime::ASM::lis(context->r3, fn_8044CE08 @ Get_MemoryOffset_HighBit);
/*8044DB80 0044A980*/ PPC::Runtime::ASM::addi(context->r4, context->r3, fn_8044CE08 @ Get_MemoryOffset_LowBit);
/*8044DB84 0044A984*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r5));
/*8044DB88 0044A988*/ PPC::Runtime::ASM::bl(fn_804472B8);
RUNTIME_PPC_JUMP_LABEL(.L_8044DB8C, 0x8044DB8C) //this is a jump label
/*8044DB8C 0044A98C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x50);
/*8044DB90 0044A990*/ PPC::Runtime::ASM::bl(_restgpr_21);
/*8044DB94 0044A994*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*8044DB98 0044A998*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8044DB9C 0044A99C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*8044DBA0 0044A9A0*/ PPC::Runtime::ASM::blr();
}