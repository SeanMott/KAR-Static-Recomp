//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8037B028.hpp"
#include "fn_80379398.hpp"
#include "fn_80313A84.hpp"
#include "fn_80316128.hpp"
#include "fn_80316128.hpp"
#include "fn_802B042C.hpp"
#include "fn_8037B028.hpp"
#include "fn_80379398.hpp"
#include "fn_802AFFD8.hpp"
#include "fn_8033CE08.hpp"
#include "fn_80316128.hpp"



void fn_8033C7D8(PPC::Runtime::GCContext* context)
{
/*8033C7D8 003395D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xf0, context->r1));
/*8033C7DC 003395DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8033C7E0 003395E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*8033C7E4 003395E4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xf0);
/*8033C7E8 003395E8*/ PPC::Runtime::ASM::bl(_savegpr_22);
/*8033C7EC 003395EC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8033C7F0 003395F0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8033C7F4 003395F4*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8033C7F8 003395F8*/ PPC::Runtime::ASM::mr(context->r24, context->r6);
/*8033C7FC 003395FC*/ PPC::Runtime::ASM::addi(context->r22, context->r30, 0x34);
/*8033C800 00339600*/ PPC::Runtime::ASM::lis(context->r8, lbl_804E5C60 @ Get_MemoryOffset_HighBit);
/*8033C804 00339604*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8033C808 00339608*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8033C80C 0033960C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E43D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033C810 00339610*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8033C814 00339614*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8033C818 00339618*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*8033C81C 0033961C*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*8033C820 00339620*/ PPC::Runtime::ASM::addi(context->r28, context->r8, lbl_804E5C60 @ Get_MemoryOffset_LowBit);
/*8033C824 00339624*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*8033C828 00339628*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8033C82C 0033962C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8033C830 00339630*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8033C834 00339634*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8033C838 00339638*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8033C83C 0033963C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8033C840 00339640*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r30));
/*8033C844 00339644*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*8033C848 00339648*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*8033C84C 0033964C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*8033C850 00339650*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8033C854 00339654*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033C858 00339658*/ PPC::Runtime::ASM::bctrl();
/*8033C85C 0033965C*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8033C860 00339660*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*8033C864 00339664*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8033C868 00339668*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8033C86C 0033966C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*8033C870 00339670*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8033C874 00339674*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8033C878 00339678*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8033C87C 0033967C*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8033C880 00339680*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8033C884 00339684*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x80);
/*8033C888 00339688*/ PPC::Runtime::ASM::bl(fn_80379398);
/*8033C88C 0033968C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BE238 @ Get_MemoryOffset_HighBit);
/*8033C890 00339690*/ PPC::Runtime::ASM::addi(context->r22, context->r30, 0xbc);
/*8033C894 00339694*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BE238 @ Get_MemoryOffset_LowBit);
/*8033C898 00339698*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033C89C 0033969C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r30));
/*8033C8A0 003396A0*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*8033C8A4 003396A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r30));
/*8033C8A8 003396A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4, context->r30));
/*8033C8AC 003396AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*8033C8B0 003396B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8033C8B4 003396B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033C8B8 003396B8*/ PPC::Runtime::ASM::bctrl();
/*8033C8BC 003396BC*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BE210 @ Get_MemoryOffset_HighBit);
/*8033C8C0 003396C0*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD724 @ Get_MemoryOffset_HighBit);
/*8033C8C4 003396C4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BE210 @ Get_MemoryOffset_LowBit);
/*8033C8C8 003396C8*/ PPC::Runtime::ASM::addi(context->r26, context->r30, 0xd0);
/*8033C8CC 003396CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*8033C8D0 003396D0*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*8033C8D4 003396D4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BD724 @ Get_MemoryOffset_LowBit);
/*8033C8D8 003396D8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033C8DC 003396DC*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r22));
/*8033C8E0 003396E0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8033C8E4 003396E4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd0, context->r30));
/*8033C8E8 003396E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd4, context->r30));
/*8033C8EC 003396EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd8, context->r30));
/*8033C8F0 003396F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8033C8F4 003396F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8033C8F8 003396F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033C8FC 003396FC*/ PPC::Runtime::ASM::bctrl();
/*8033C900 00339700*/ PPC::Runtime::ASM::lis(context->r3, lbl_804F3510 @ Get_MemoryOffset_HighBit);
/*8033C904 00339704*/ PPC::Runtime::ASM::lis(context->r4, lbl_804E6D04 @ Get_MemoryOffset_HighBit);
/*8033C908 00339708*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804F3510 @ Get_MemoryOffset_LowBit);
/*8033C90C 0033970C*/ PPC::Runtime::ASM::lis(context->r3, StructWithStructs_7 @ Get_MemoryOffset_HighBit);
/*8033C910 00339710*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8033C914 00339714*/ PPC::Runtime::ASM::addi(context->r3, context->r3, StructWithStructs_7 @ Get_MemoryOffset_LowBit);
/*8033C918 00339718*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4434 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033C91C 0033971C*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*8033C920 00339720*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E43D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033C924 00339724*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*8033C928 00339728*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r26));
/*8033C92C 0033972C*/ PPC::Runtime::ASM::addi(context->r7, context->r4, lbl_804E6D04 @ Get_MemoryOffset_LowBit);
/*8033C930 00339730*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E43E0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033C934 00339734*/ PPC::Runtime::ASM::li(context->r6, 0x3);
/*8033C938 00339738*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r26));
/*8033C93C 0033973C*/ PPC::Runtime::ASM::li(context->r0, 0x15);
/*8033C940 00339740*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E43F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033C944 00339744*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x1c);
/*8033C948 00339748*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*8033C94C 0033974C*/ PPC::Runtime::ASM::subi(context->r4, context->r3, 0x4);
/*8033C950 00339750*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E4438 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033C954 00339754*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r26));
/*8033C958 00339758*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r26));
/*8033C95C 0033975C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*8033C960 00339760*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r26));
/*8033C964 00339764*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r26));
/*8033C968 00339768*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r26));
/*8033C96C 0033976C*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r26));
/*8033C970 00339770*/ PPC::Runtime::ASM::stb(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r26));
/*8033C974 00339774*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8033C978 00339778*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*8033C97C 0033977C*/ PPC::Runtime::ASM::stw(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*8033C980 00339780*/ PPC::Runtime::ASM::stfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r26));
/*8033C984 00339784*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r26));
/*8033C988 00339788*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r26));
/*8033C98C 0033978C*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8033C990, 0x8033C990) //this is a jump label
/*8033C990 00339790*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8033C994 00339794*/ PPC::Runtime::ASM::lwzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8033C998 00339798*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8033C99C 0033979C*/ PPC::Runtime::ASM::stwu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8033C9A0 003397A0*/ PPC::Runtime::ASM::bdnz(.L_8033C990);
/*8033C9A4 003397A4*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*8033C9A8 003397A8*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*8033C9AC 003397AC*/ PPC::Runtime::ASM::bne(.L_8033C9C0);
/*8033C9B0 003397B0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DAE0C @ Get_MemoryOffset_SDA21);
/*8033C9B4 003397B4*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*8033C9B8 003397B8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAE14 @ Get_MemoryOffset_SDA21);
/*8033C9BC 003397BC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8033C9C0, 0x8033C9C0) //this is a jump label
/*8033C9C0 003397C0*/ PPC::Runtime::ASM::addic.(context->r0, context->r30, 0x18);
/*8033C9C4 003397C4*/ PPC::Runtime::ASM::bne(.L_8033C9D8);
/*8033C9C8 003397C8*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0xc98);
/*8033C9CC 003397CC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DAE0C @ Get_MemoryOffset_SDA21);
/*8033C9D0 003397D0*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*8033C9D4 003397D4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8033C9D8, 0x8033C9D8) //this is a jump label
/*8033C9D8 003397D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r22));
/*8033C9DC 003397DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8033C9E0 003397E0*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8033C9E4 003397E4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033C9E8 003397E8*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*8033C9EC 003397EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*8033C9F0 003397F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r22));
/*8033C9F4 003397F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r30));
/*8033C9F8 003397F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r22));
/*8033C9FC 003397FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8033CA00 00339800*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DDCA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033CA04 00339804*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r5));
/*8033CA08 00339808*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8033CA0C 0033980C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r5));
/*8033CA10 00339810*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8033CA14 00339814  7C 76 1B 79 */ mr. context->r22 , context->r3
/*8033CA18 00339818*/ PPC::Runtime::ASM::beq(.L_8033CA44);
/*8033CA1C 0033981C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*8033CA20 00339820*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8033CA24 00339824*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033CA28 00339828*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8033CA2C 0033982C*/ PPC::Runtime::ASM::bl(fn_8038D0A8);
/*8033CA30 00339830*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8033CA34 00339834*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*8033CA38 00339838*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*8033CA3C 0033983C*/ PPC::Runtime::ASM::bl(fn_80313A84);
/*8033CA40 00339840*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8033CA44, 0x8033CA44) //this is a jump label
/*8033CA44 00339844*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033CA48 00339848*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033CA4C 0033984C*/ PPC::Runtime::ASM::stw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033CA50 00339850*/ PPC::Runtime::ASM::cmplw(context->r23, context->r22);
/*8033CA54 00339854*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033CA58 00339858*/ PPC::Runtime::ASM::stw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8033CA5C 0033985C*/ PPC::Runtime::ASM::stw(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8033CA60 00339860*/ PPC::Runtime::ASM::beq(.L_8033CA90);
/*8033CA64 00339864*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*8033CA68 00339868*/ PPC::Runtime::ASM::beq(.L_8033CA88);
/*8033CA6C 0033986C*/ PPC::Runtime::ASM::beq(.L_8033CA80);
/*8033CA70 00339870*/ PPC::Runtime::ASM::beq(.L_8033CA80);
/*8033CA74 00339874*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*8033CA78 00339878*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033CA7C 0033987C*/ PPC::Runtime::ASM::bl(fn_80316128);
RUNTIME_PPC_JUMP_LABEL(.L_8033CA80, 0x8033CA80) //this is a jump label
/*8033CA80 00339880*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*8033CA84 00339884*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8033CA88, 0x8033CA88) //this is a jump label
/*8033CA88 00339888*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8033CA8C 0033988C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8033CA90, 0x8033CA90) //this is a jump label
/*8033CA90 00339890*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033CA94 00339894*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8033CA98 00339898*/ PPC::Runtime::ASM::beq(.L_8033CAB4);
/*8033CA9C 0033989C*/ PPC::Runtime::ASM::beq(.L_8033CAAC);
/*8033CAA0 003398A0*/ PPC::Runtime::ASM::beq(.L_8033CAAC);
/*8033CAA4 003398A4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033CAA8 003398A8*/ PPC::Runtime::ASM::bl(fn_80316128);
RUNTIME_PPC_JUMP_LABEL(.L_8033CAAC, 0x8033CAAC) //this is a jump label
/*8033CAAC 003398AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8033CAB0 003398B0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8033CAB4, 0x8033CAB4) //this is a jump label
/*8033CAB4 003398B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8033CAB8 003398B8*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0xfb4);
/*8033CABC 003398BC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDCA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033CAC0 003398C0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r3));
/*8033CAC4 003398C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8033CAC8 003398C8*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 8033CACC 003398CC  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8033CAD0 003398D0*/ PPC::Runtime::ASM::beq(.L_8033CADC);
/*8033CAD4 003398D4*/ PPC::Runtime::ASM::addi(context->r31, context->r28, 0xfc4);
/*8033CAD8 003398D8*/ PPC::Runtime::ASM::b(.L_8033CB10);
RUNTIME_PPC_JUMP_LABEL(.L_8033CADC, 0x8033CADC) //this is a jump label
/*8033CADC 003398DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8033CAE0 003398E0*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0xfd4);
/*8033CAE4 003398E4*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 8033CAE8 003398E8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8033CAEC 003398EC*/ PPC::Runtime::ASM::beq(.L_8033CAF8);
/*8033CAF0 003398F0*/ PPC::Runtime::ASM::addi(context->r31, context->r28, 0xfe4);
/*8033CAF4 003398F4*/ PPC::Runtime::ASM::b(.L_8033CB10);
RUNTIME_PPC_JUMP_LABEL(.L_8033CAF8, 0x8033CAF8) //this is a jump label
/*8033CAF8 003398F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*8033CAFC 003398FC*/ PPC::Runtime::ASM::addi(context->r4, context->r28, 0xff4);
/*8033CB00 00339900*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 8033CB04 00339904  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8033CB08 00339908*/ PPC::Runtime::ASM::beq(.L_8033CB10);
/*8033CB0C 0033990C*/ PPC::Runtime::ASM::addi(context->r31, context->r28, 0x1004);
RUNTIME_PPC_JUMP_LABEL(.L_8033CB10, 0x8033CB10) //this is a jump label
/*8033CB10 00339910*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033CB14 00339914*/ PPC::Runtime::ASM::li(context->r25, 0x0);
/*8033CB18 00339918*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*8033CB1C 0033991C*/ PPC::Runtime::ASM::li(context->r22, 0x0);
/*8033CB20 00339920*/ PPC::Runtime::ASM::b(.L_8033CB5C);
RUNTIME_PPC_JUMP_LABEL(.L_8033CB24, 0x8033CB24) //this is a jump label
/*8033CB24 00339924*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
/*8033CB28 00339928*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r22);
/*8033CB2C 0033992C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*8033CB30 00339930*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8033CB34 00339934*/ PPC::Runtime::ASM::beq(.L_8033CB3C);
/*8033CB38 00339938*/ PPC::Runtime::ASM::b(.L_8033CB40);
RUNTIME_PPC_JUMP_LABEL(.L_8033CB3C, 0x8033CB3C) //this is a jump label
/*8033CB3C 0033993C*/ PPC::Runtime::ASM::li(context->r4, lbl_805DAE1C @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_8033CB40, 0x8033CB40) //this is a jump label
/*8033CB40 00339940*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8033CB44 00339944*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 8033CB48 00339948  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8033CB4C 0033994C*/ PPC::Runtime::ASM::beq(.L_8033CB54);
/*8033CB50 00339950*/ PPC::Runtime::ASM::addi(context->r25, context->r25, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8033CB54, 0x8033CB54) //this is a jump label
/*8033CB54 00339954*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x8);
/*8033CB58 00339958*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8033CB5C, 0x8033CB5C) //this is a jump label
/*8033CB5C 0033995C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r23));
/*8033CB60 00339960*/ PPC::Runtime::ASM::cmplw(context->r24, context->r0);
/*8033CB64 00339964*/ PPC::Runtime::ASM::blt(.L_8033CB24);
/*8033CB68 00339968*/ PPC::Runtime::ASM::mr(context->r4, context->r25);
/*8033CB6C 0033996C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*8033CB70 00339970*/ PPC::Runtime::ASM::bl(fn_802B042C);
/*8033CB74 00339974*/ PPC::Runtime::ASM::li(context->r24, 0x0);
/*8033CB78 00339978*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033CB7C 0033997C*/ PPC::Runtime::ASM::mr(context->r26, context->r24);
/*8033CB80 00339980*/ PPC::Runtime::ASM::b(.L_8033CD28);
RUNTIME_PPC_JUMP_LABEL(.L_8033CB84, 0x8033CB84) //this is a jump label
/*8033CB84 00339984*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/*8033CB88 00339988*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r26);
/*8033CB8C 0033998C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r3));
/*8033CB90 00339990*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8033CB94 00339994*/ PPC::Runtime::ASM::beq(.L_8033CB9C);
/*8033CB98 00339998*/ PPC::Runtime::ASM::b(.L_8033CBA0);
RUNTIME_PPC_JUMP_LABEL(.L_8033CB9C, 0x8033CB9C) //this is a jump label
/*8033CB9C 0033999C*/ PPC::Runtime::ASM::li(context->r4, lbl_805DAE1C @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_8033CBA0, 0x8033CBA0) //this is a jump label
/*8033CBA0 003399A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8033CBA4 003399A4*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 8033CBA8 003399A8  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8033CBAC 003399AC*/ PPC::Runtime::ASM::beq(.L_8033CD20);
/*8033CBB0 003399B0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033CBB4 003399B4*/ PPC::Runtime::ASM::addi(context->r27, context->r1, 0x20);
/*8033CBB8 003399B8*/ PPC::Runtime::ASM::b(.L_8033CD14);
RUNTIME_PPC_JUMP_LABEL(.L_8033CBBC, 0x8033CBBC) //this is a jump label
/*8033CBBC 003399BC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*8033CBC0 003399C0*/ PPC::Runtime::ASM::lwzx(context->r4, context->r4, context->r26);
/*8033CBC4 003399C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r4));
/*8033CBC8 003399C8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8033CBCC 003399CC*/ PPC::Runtime::ASM::beq(.L_8033CBD4);
/*8033CBD0 003399D0*/ PPC::Runtime::ASM::b(.L_8033CBD8);
RUNTIME_PPC_JUMP_LABEL(.L_8033CBD4, 0x8033CBD4) //this is a jump label
/*8033CBD4 003399D4*/ PPC::Runtime::ASM::li(context->r4, lbl_805DAE1C @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_8033CBD8, 0x8033CBD8) //this is a jump label
/*8033CBD8 003399D8*/ PPC::Runtime::ASM::bl(fn_80391F10);
/* 8033CBDC 003399DC  54 60 06 3F */ clrlwi. context->r0 , context->r3 , 24
/*8033CBE0 003399E0*/ PPC::Runtime::ASM::beq(.L_8033CD10);
/*8033CBE4 003399E4*/ PPC::Runtime::ASM::li(context->r3, 0xac);
/*8033CBE8 003399E8*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 8033CBEC 003399EC  7C 66 1B 79 */ mr. context->r6 , context->r3
/*8033CBF0 003399F0*/ PPC::Runtime::ASM::beq(.L_8033CCEC);
/*8033CBF4 003399F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033CBF8 003399F8*/ PPC::Runtime::ASM::mr(context->r22, context->r6);
/*8033CBFC 003399FC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BDF2C @ Get_MemoryOffset_HighBit);
/*8033CC00 00339A00*/ PPC::Runtime::ASM::addi(context->r0, context->r26, 0x4);
/*8033CC04 00339A04*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8033CC08 00339A08*/ PPC::Runtime::ASM::addi(context->r23, context->r22, 0x18);
/*8033CC0C 00339A0C*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*8033CC10 00339A10*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804BDF2C @ Get_MemoryOffset_LowBit);
/*8033CC14 00339A14*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*8033CC18 00339A18*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033CC1C 00339A1C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E43D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033CC20 00339A20*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*8033CC24 00339A24*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*8033CC28 00339A28*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*8033CC2C 00339A2C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r6));
/*8033CC30 00339A30*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*8033CC34 00339A34*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*8033CC38 00339A38*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r6));
/*8033CC3C 00339A3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*8033CC40 00339A40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*8033CC44 00339A44*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*8033CC48 00339A48*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8033CC4C 00339A4C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8033CC50 00339A50*/ PPC::Runtime::ASM::bctrl();
/*8033CC54 00339A54*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BDF70 @ Get_MemoryOffset_HighBit);
/*8033CC58 00339A58*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*8033CC5C 00339A5C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BDF70 @ Get_MemoryOffset_LowBit);
/*8033CC60 00339A60*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8033CC64 00339A64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*8033CC68 00339A68*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8033CC6C 00339A6C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8033CC70 00339A70*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8033CC74 00339A74*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8033CC78 00339A78*/ PPC::Runtime::ASM::bl(fn_8037B028);
/*8033CC7C 00339A7C*/ PPC::Runtime::ASM::addi(context->r3, context->r22, 0x64);
/*8033CC80 00339A80*/ PPC::Runtime::ASM::bl(fn_80379398);
/*8033CC84 00339A84*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E43D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8033CC88 00339A88*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa8, context->r22));
/*8033CC8C 00339A8C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r22));
/*8033CC90 00339A90*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa0, context->r22));
/*8033CC94 00339A94*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*8033CC98 00339A98*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*8033CC9C 00339A9C*/ PPC::Runtime::ASM::bne(.L_8033CCB0);
/*8033CCA0 00339AA0*/ PPC::Runtime::ASM::li(context->r3, lbl_805DAE0C @ Get_MemoryOffset_SDA21);
/*8033CCA4 00339AA4*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*8033CCA8 00339AA8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DAE14 @ Get_MemoryOffset_SDA21);
/*8033CCAC 00339AAC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8033CCB0, 0x8033CCB0) //this is a jump label
/*8033CCB0 00339AB0*/ PPC::Runtime::ASM::addic.(context->r0, context->r22, 0x8);
/*8033CCB4 00339AB4*/ PPC::Runtime::ASM::bne(.L_8033CCC8);
/*8033CCB8 00339AB8*/ PPC::Runtime::ASM::addi(context->r5, context->r28, 0xc98);
/*8033CCBC 00339ABC*/ PPC::Runtime::ASM::li(context->r3, lbl_805DAE0C @ Get_MemoryOffset_SDA21);
/*8033CCC0 00339AC0*/ PPC::Runtime::ASM::li(context->r4, 0x3e5);
/*8033CCC4 00339AC4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8033CCC8, 0x8033CCC8) //this is a jump label
/*8033CCC8 00339AC8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r23));
/*8033CCCC 00339ACC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8033CCD0 00339AD0*/ PPC::Runtime::ASM::mr(context->r6, context->r22);
/*8033CCD4 00339AD4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r22));
/*8033CCD8 00339AD8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r23));
/*8033CCDC 00339ADC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r22));
/*8033CCE0 00339AE0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r23));
/*8033CCE4 00339AE4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r22));
/*8033CCE8 00339AE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r22));
RUNTIME_PPC_JUMP_LABEL(.L_8033CCEC, 0x8033CCEC) //this is a jump label
/*8033CCEC 00339AEC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8033CCF0 00339AF0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xc);
/*8033CCF4 00339AF4*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x10);
/*8033CCF8 00339AF8*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8033CCFC 00339AFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8033CD00 00339B00*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*8033CD04 00339B04*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*8033CD08 00339B08*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*8033CD0C 00339B0C*/ PPC::Runtime::ASM::bl(fn_802AFFD8);
RUNTIME_PPC_JUMP_LABEL(.L_8033CD10, 0x8033CD10) //this is a jump label
/*8033CD10 00339B10*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_8033CD14, 0x8033CD14) //this is a jump label
/*8033CD14 00339B14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8033CD18 00339B18*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8033CD1C 00339B1C*/ PPC::Runtime::ASM::bne(.L_8033CBBC);
RUNTIME_PPC_JUMP_LABEL(.L_8033CD20, 0x8033CD20) //this is a jump label
/*8033CD20 00339B20*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x8);
/*8033CD24 00339B24*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8033CD28, 0x8033CD28) //this is a jump label
/*8033CD28 00339B28*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r25));
/*8033CD2C 00339B2C*/ PPC::Runtime::ASM::cmplw(context->r24, context->r0);
/*8033CD30 00339B30*/ PPC::Runtime::ASM::blt(.L_8033CB84);
/*8033CD34 00339B34*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8033CD38 00339B38*/ PPC::Runtime::ASM::bl(fn_8033CE08);
/*8033CD3C 00339B3C*/ PPC::Runtime::ASM::lwz(context->r22, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8033CD40 00339B40*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*8033CD44 00339B44*/ PPC::Runtime::ASM::beq(.L_8033CD64);
/*8033CD48 00339B48*/ PPC::Runtime::ASM::beq(.L_8033CD5C);
/*8033CD4C 00339B4C*/ PPC::Runtime::ASM::beq(.L_8033CD5C);
/*8033CD50 00339B50*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*8033CD54 00339B54*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8033CD58 00339B58*/ PPC::Runtime::ASM::bl(fn_80316128);
RUNTIME_PPC_JUMP_LABEL(.L_8033CD5C, 0x8033CD5C) //this is a jump label
/*8033CD5C 00339B5C*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*8033CD60 00339B60*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8033CD64, 0x8033CD64) //this is a jump label
/*8033CD64 00339B64*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8033CD68 00339B68*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0xf0);
/*8033CD6C 00339B6C*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*8033CD70 00339B70*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r1));
/*8033CD74 00339B74*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8033CD78 00339B78*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xf0);
/*8033CD7C 00339B7C*/ PPC::Runtime::ASM::blr();
}