//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_gmGetClearcheckerType2Ptr.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_8004A054.hpp"
#include "fn_8004A054.hpp"
#include "fn_802315C0.hpp"
#include "fn_8004A054.hpp"
#include "fn_802315C0.hpp"
#include "fn_8004A054.hpp"
#include "fn_8004A054.hpp"



void fn_8004E810(PPC::Runtime::GCContext* context)
{
/*8004E810 0004B610*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8004E814 0004B614*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004E818 0004B618*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8004E81C 0004B61C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8004E820 0004B620*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8004E824 0004B624*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8004E828 0004B628*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*8004E82C 0004B62C*/ PPC::Runtime::ASM::addi(context->r29, context->r27, 0x830);
/*8004E830 0004B630*/ PPC::Runtime::ASM::bl(fn_gmGetClearcheckerType2Ptr);
/*8004E834 0004B634*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8004E838 0004B638*/ PPC::Runtime::ASM::mr(context->r30, context->r29);
/*8004E83C 0004B63C*/ PPC::Runtime::ASM::li(context->r28, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004E840, 0x8004E840) //this is a jump label
/*8004E840 0004B640*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8004E844 0004B644*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004E848 0004B648*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004E84C 0004B64C*/ PPC::Runtime::ASM::bne(.L_8004E948);
/*8004E850 0004B650*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r27));
/*8004E854 0004B654*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8004E858 0004B658*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xa);
/*8004E85C 0004B65C*/ PPC::Runtime::ASM::beq(.L_8004E948);
/*8004E860 0004B660*/ PPC::Runtime::ASM::bge(.L_8004E870);
/*8004E864 0004B664*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x9);
/*8004E868 0004B668*/ PPC::Runtime::ASM::bge(.L_8004E8F8);
/*8004E86C 0004B66C*/ PPC::Runtime::ASM::b(.L_8004E948);
RUNTIME_PPC_JUMP_LABEL(.L_8004E870, 0x8004E870) //this is a jump label
/*8004E870 0004B670*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xc);
/*8004E874 0004B674*/ PPC::Runtime::ASM::bge(.L_8004E948);
/*8004E878 0004B678*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x22);
/*8004E87C 0004B67C*/ PPC::Runtime::ASM::lbzx(context->r0, context->r29, context->r0);
/*8004E880 0004B680*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8004E884 0004B684*/ PPC::Runtime::ASM::beq(.L_8004E948);
/*8004E888 0004B688*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r30));
/*8004E88C 0004B68C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DE944 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8004E890 0004B690*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE948 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8004E894 0004B694*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*8004E898 0004B698*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8004E89C 0004B69C*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8004E8A0 0004B6A0*/ PPC::Runtime::ASM::bne(.L_8004E8B0);
/*8004E8A4 0004B6A4*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8004E8A8 0004B6A8*/ PPC::Runtime::ASM::li(context->r4, 0x16);
/*8004E8AC 0004B6AC*/ PPC::Runtime::ASM::bl(fn_8004A054);
RUNTIME_PPC_JUMP_LABEL(.L_8004E8B0, 0x8004E8B0) //this is a jump label
/*8004E8B0 0004B6B0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21c, context->r30));
/*8004E8B4 0004B6B4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DE944 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8004E8B8 0004B6B8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DE94C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8004E8BC 0004B6BC*/ PPC::Runtime::ASM::fdivs(context->f1, context->f2, context->f1);
/*8004E8C0 0004B6C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*8004E8C4 0004B6C4*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8004E8C8 0004B6C8*/ PPC::Runtime::ASM::bne(.L_8004E8D8);
/*8004E8CC 0004B6CC*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8004E8D0 0004B6D0*/ PPC::Runtime::ASM::li(context->r4, 0x17);
/*8004E8D4 0004B6D4*/ PPC::Runtime::ASM::bl(fn_8004A054);
RUNTIME_PPC_JUMP_LABEL(.L_8004E8D8, 0x8004E8D8) //this is a jump label
/*8004E8D8 0004B6D8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8004E8DC 0004B6DC*/ PPC::Runtime::ASM::bl(fn_802315C0);
/*8004E8E0 0004B6E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x258);
/*8004E8E4 0004B6E4*/ PPC::Runtime::ASM::blt(.L_8004E948);
/*8004E8E8 0004B6E8*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8004E8EC 0004B6EC*/ PPC::Runtime::ASM::li(context->r4, 0x18);
/*8004E8F0 0004B6F0*/ PPC::Runtime::ASM::bl(fn_8004A054);
/*8004E8F4 0004B6F4*/ PPC::Runtime::ASM::b(.L_8004E948);
RUNTIME_PPC_JUMP_LABEL(.L_8004E8F8, 0x8004E8F8) //this is a jump label
/*8004E8F8 0004B6F8*/ PPC::Runtime::ASM::addi(context->r0, context->r28, 0x22);
/*8004E8FC 0004B6FC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r29, context->r0);
/*8004E900 0004B700*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8004E904 0004B704*/ PPC::Runtime::ASM::beq(.L_8004E948);
/*8004E908 0004B708*/ PPC::Runtime::ASM::lhz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r31));
/*8004E90C 0004B70C*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8004E910 0004B710*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x208, context->r30));
/*8004E914 0004B714*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8004E918 0004B718*/ PPC::Runtime::ASM::add(context->r3, context->r5, context->r4);
/*8004E91C 0004B71C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xffff);
/*8004E920 0004B720*/ PPC::Runtime::ASM::bgt(.L_8004E928);
/*8004E924 0004B724*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r3, 16);
RUNTIME_PPC_JUMP_LABEL(.L_8004E928, 0x8004E928) //this is a jump label
/*8004E928 0004B728*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r31));
/*8004E92C 0004B72C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8004E930 0004B730*/ PPC::Runtime::ASM::bl(fn_802315C0);
/*8004E934 0004B734*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x384);
/*8004E938 0004B738*/ PPC::Runtime::ASM::blt(.L_8004E948);
/*8004E93C 0004B73C*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8004E940 0004B740*/ PPC::Runtime::ASM::li(context->r4, 0x1c);
/*8004E944 0004B744*/ PPC::Runtime::ASM::bl(fn_8004A054);
RUNTIME_PPC_JUMP_LABEL(.L_8004E948, 0x8004E948) //this is a jump label
/*8004E948 0004B748*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*8004E94C 0004B74C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x4);
/*8004E950 0004B750*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x5);
/*8004E954 0004B754*/ PPC::Runtime::ASM::blt(.L_8004E840);
/*8004E958 0004B758*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa94, context->r27));
/*8004E95C 0004B75C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x9);
/*8004E960 0004B760*/ PPC::Runtime::ASM::beq(.L_8004E968);
/*8004E964 0004B764*/ PPC::Runtime::ASM::b(.L_8004E980);
RUNTIME_PPC_JUMP_LABEL(.L_8004E968, 0x8004E968) //this is a jump label
/*8004E968 0004B768*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x100, context->r31));
/*8004E96C 0004B76C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x5dc);
/*8004E970 0004B770*/ PPC::Runtime::ASM::blt(.L_8004E980);
/*8004E974 0004B774*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8004E978 0004B778*/ PPC::Runtime::ASM::li(context->r4, 0x1e);
/*8004E97C 0004B77C*/ PPC::Runtime::ASM::bl(fn_8004A054);
RUNTIME_PPC_JUMP_LABEL(.L_8004E980, 0x8004E980) //this is a jump label
/*8004E980 0004B780*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*8004E984 0004B784*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*8004E988 0004B788*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8004E98C 0004B78C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004E990 0004B790*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8004E994 0004B794*/ PPC::Runtime::ASM::blr();
}